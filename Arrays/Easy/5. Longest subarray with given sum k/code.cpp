int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), maxLen = 0;
    long long sum = 0;
    unordered_map<int, int> sumInd;
    sumInd[0] = -1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sumInd.find(sum-k) != sumInd.end()){
            maxLen = max(maxLen, i-sumInd[sum-k]);
        }
        else{
            sumInd[sum] = i;
        }
    }

    return maxLen;
}
