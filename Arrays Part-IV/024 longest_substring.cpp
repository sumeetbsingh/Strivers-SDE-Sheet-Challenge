#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map <char, int> mp;
    int length =0;
    int left =0;
    for(int right = 0; right<input.size(); right++){
        char current = input[right];
        if(mp.find(current) != mp.end() && mp[current] >= left){
            left = mp[current] +1;
        }
        mp[current] = right;
        int currentLength = right - left +1;
        length = max(length, currentLength);
    }
    return length;
}