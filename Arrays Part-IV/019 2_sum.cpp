#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;
   int n = arr.size();
   for(int i = 0; i<n; i++){
      vector<int> temp;
      for(int j =i+1; j<n; j++){
         if(arr[i]+arr[j]==s){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);          
         }
         if(arr[i]+arr[j]>s)
            break;
      }
   }
   return ans;
}