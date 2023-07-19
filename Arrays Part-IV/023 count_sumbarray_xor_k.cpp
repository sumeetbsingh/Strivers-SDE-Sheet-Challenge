#include <bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    map<int, int> mp;
    int xr = 0;
    mp[xr]++;
    int cnt =0;
    for(int i = 0; i<a.size(); i++){
        xr = xr^a[i];
        int rem = xr ^ b;
        cnt += mp[rem];
        mp[xr]++;
    } 
    return cnt;
}