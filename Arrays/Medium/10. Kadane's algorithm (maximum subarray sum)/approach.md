### Kadane's Algorithm { T -> O(N), S -> O(1) }:
1. initialise two variables- currSum and maxSum storing sum of current subarray and max sum encountered so far with 0 and first element respectively
2. initialising maxSum with first element ensures that it does not return value 0 for a negative array
3. traverse thru the array, add curr element to currSum
4. update maxSum
5. if currSum becomes negative, reset it i.e. start a new subarray from next element
