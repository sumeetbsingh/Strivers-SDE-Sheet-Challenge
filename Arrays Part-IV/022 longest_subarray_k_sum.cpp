#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int maxlen =0;
    map<int, int> mp;
    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        int rem = sum - k;
        int len =0;
        if(mp.find(rem) != mp.end()){
            len = i - mp[rem];
            maxlen = max(maxlen, len);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    } 
    return maxlen;
}