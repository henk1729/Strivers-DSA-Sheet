### Two pointer { T -> O(N+M), S -> O(N+M) }:
1. set two pointers at the beginning of the arrays
2. compare the elements, push min element into the ans vector if min element is not the last element in ans
3. finally, add remaining elements from both of the arrays (possibly zero)
