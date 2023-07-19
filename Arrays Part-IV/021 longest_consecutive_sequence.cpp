#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int longest = 1; 
    unordered_set<int> st;
    
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    
    for(auto it : st){
        if(st.find(it -1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x +1;
                cnt++;
            }
            longest = max(cnt, longest);
        }  
    }
    return longest;
}