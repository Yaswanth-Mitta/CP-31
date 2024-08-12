#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("../input.txt", "r", stdin);
   freopen("../output.txt", "w", stdout);
#endif

   int t;
   cin >> t;
   while(t--){
       int n;
       cin >> n;
       map<int, int> mpp;
       int x;
       for (int i = 0; i < n;i++){
         cin >> x;
         mpp[x]++;
       }
       int maxi = -1;
       for(auto& it : mpp){
         maxi = max(maxi, it.second);
       }
       int curr = maxi;
       int ans = n - maxi;
       while(curr < n){
          curr *= 2;
          ans++;
       }
       cout << ans << endl;
       
   }

   return 0;
}