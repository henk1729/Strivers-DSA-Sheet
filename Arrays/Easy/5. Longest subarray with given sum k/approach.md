### Sliding Window { T -> O(N), S -> O(1) }:
1. set two pointers- lo and hi (both initialised to 0)
2. sum of elements in the range [lo, hi] denotes `sum`
3. loop (for) thru array, accumulate sum at each iteration
4. remove arr[lo] from sum and increment lo while sum > k
5. here, we have two cases: sum < k or sum == k
6. if sum == k, update maxLen
7. next iteration (hi incremented)

### Map approach { T -> O(N), S -> O(N) }:
1. store prefix sum index (ind) in map\
e.g. for arr = [10, 5, 3, 6]\
map ind-> ind[10] = 0, ind[15] = 1
2. keep on updating sum with elements of arr, sum += arr[i]
3. if ind[sum-k] exists in map i.e. there is a prefix sum of 'sum-k' in array, update max length for longest subarray as max(maxLen, i-ind[sum-k]+1)
