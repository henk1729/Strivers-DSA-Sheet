int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), maxLen = 0;
    long long sum = 0;
    // contains index for cumulative sum
    unordered_map<int, int> sumInd;
    // sumInd[0] should be set to -1 as sum before going
    //  to first element (index == 0) was 0
    sumInd[0] = -1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sumInd.find(sum-k) != sumInd.end()){
            // there is a sum 'sum-k' in map and curr sum is 'sum',
            //  hence, sum 'k' should be for elements bw [sumInd[sum-k]+1, i]
            maxLen = max(maxLen, i-sumInd[sum-k]);
        }
        else{
            // updation
            sumInd[sum] = i;
        }
    }

    return maxLen;
}
