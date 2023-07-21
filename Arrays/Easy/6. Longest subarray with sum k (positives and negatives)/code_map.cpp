#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    int n = nums.size(), maxLen = 0;
    long long sum = 0;
    // map to store index for cumulative sum
    unordered_map<int, int> sumInd;
    sumInd[0] = -1;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        // if there is a cumulative sum 'sum-k' at some index
        if(sumInd.find(sum-k) != sumInd.end()){
            maxLen = max(maxLen, i-sumInd[sum-k]);
        }
        // if not, update sum index if this cumulative sum appears
        //  for the first time
        // if 'sum' already in map, don't update, in this way
        //  max len is obtained
        else if(sumInd.find(sum) == sumInd.end()){
            sumInd[sum] = i;
        }
    }

    return maxLen;
}
