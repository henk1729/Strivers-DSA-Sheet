`<prefix sum>`
### Prefix sum approach { T -> O(N*logN), S -> O(N) }:
1. initialise map, prefSum with prefSum[0] = 1; it maps prefix sum with its no. of occurrences
2. traverse array and accumulate sum, 'sum'
3. check if 'sum-k' was prefix sum for some array i.e. prefSum.find(sum-k) != prefSum.end()
4. if present, update subarray-count for 'sum-k'
5. update count for prefix-sum, 'sum'
