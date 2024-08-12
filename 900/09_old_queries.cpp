#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Segment tree and nums vectors
vector<int> segt;
vector<int> nums;

void build(int index, int low, int high)
{
    if (low == high)
    {
        segt[index] = nums[low];
        return;
    }

    int mid = (low + high) / 2;
    build(2 * index + 1, low, mid);
    build(2 * index + 2, mid + 1, high);

    segt[index] = segt[2 * index + 1] + segt[2 * index + 2];
}

int queryr(int index, int low, int high, int st, int end)
{
    if (st > high || end < low)
    {
        return 0;
    }

    if (st <= low && high <= end)
    { // Changed condition to cover the query range correctly
        return segt[index];
    }

    int mid = (low + high) / 2;
    return queryr(2 * index + 1, low, mid, st, end) + queryr(2 * index + 2, mid + 1, high, st, end);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        nums.clear();
        segt.clear();

        int n, q;
        cin >> n >> q;
        segt.resize(n * 4, 0);
        int x;
        int to = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
            {
                nums.push_back(1);
                to++;
            }
            else
            {
                nums.push_back(0);
            }
        }
        build(0, 0, n - 1);

        int l, r, k;
        int ods;
        for (int i = 0; i < q; i++)
        {
            cin >> l >> r >> k;
            ods = queryr(0, 0, n - 1, l - 1, r - 1);
            int d = r - l + 1;
            int et = to - ods;
            if (k % 2 == 1)
            {
                et += d;
            }
            if (et % 2 == 1)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            cout << endl;
        }
    }

    return 0;
}
