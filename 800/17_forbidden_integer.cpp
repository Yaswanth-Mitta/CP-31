#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        
        if(x != 1){
            cout << "YES\n";
            cout << n << endl;
            for (int i = 1; i <= n;i++)
                cout << "1 ";
        }else{
            if(k == 1){
                cout << "NO\n";
            }else if( n%2 == 0  ){
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 1; i <=  n / 2; i++)
                    cout << "2 " ;
            }else if(n%2 == 1){
                if(k >= 3){
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    cout << "3 ";
                    for (int i = 1; i < n / 2;i++){
                        cout << "2 ";
                    }
                }else{
                    cout << "NO";
                }

            }
        }
        cout << endl;
    }

    return 0;
}