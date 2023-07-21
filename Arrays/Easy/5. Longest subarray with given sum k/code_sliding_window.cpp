int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), lo = 0, maxLen = 0;
    long long sum = 0;
    // 'sum' contains sum of elements in the range [lo, hi]
    // gets 0 if lo > hi (no element)
    for(int hi = 0; hi < n; hi++){
        // accumulate elements
        sum += a[hi];
        
        // if sum crosses 'k' or is equal to it, while runs as long as search space i.e. [lo, hi]
        //  is not exhausted
        // if space is exhausted, sum gets 0 and k > 0 (given), so if the former condition gets
        //  false, so does latter
        while(lo <= hi && sum > k){
            sum -= a[lo];
            lo++;
        }

        // check for sum's equality with k (here, sum <= k)
        if(sum == k){
            // remember that 'sum' contains elements in the range [lo, hi],
            //  hence length is hi-lo+1
            maxLen = max(maxLen, hi-lo+1);
        }
    }

    return maxLen;
}
