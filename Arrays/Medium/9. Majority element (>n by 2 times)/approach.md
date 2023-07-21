### Moore's Voting Algorithm { T -> O(N), S -> O(1) }:
1. initialize first element as majority element, and majority count as zero
2. traverse the array, if element is same as maj ele increment cnt, else decrement it
3. if counter becomes 0, reset it and assign current ele as maj ele
4. check for maj ele by traversing thru the array again (in case maj ele is not guaranteed in the array)
