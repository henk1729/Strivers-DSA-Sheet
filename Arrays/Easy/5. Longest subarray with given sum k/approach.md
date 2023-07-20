### Sliding Window { T -> O(N), S -> O(1) }:
1. 

### Map approach { T -> O(N), S -> O(N) }:
1. store prefix sum index (ind) in map\
e.g. for arr = [10, 5, 3, 6]\
map ind-> ind[10] = 0, ind[15] = 1
2. keep on updating sum with elements of arr, sum += arr[i]
3. if ind[sum-k] exists in map i.e. there is a prefix sum of 'sum-k' in array, update max length for longest subarray as max(maxLen, i-ind[sum-k]+1)
