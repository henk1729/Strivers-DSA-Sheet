### Prefix-Suffix Product { T -> O(N), S -> O(1) }:
1. for any array, its max prod (product) subarray will be its prefix or suffix
2. if the arr contains even no. of neg elements with no zeroes, the entire arr will be the max prod subarr (this is both prefix and suffix)
3. else if the arr contains odd no. of neg elements then the max prod subarr will be either one after the first neg (exclusive) or the one before last neg (exclusive)
4. whenever a zero is encountered in the arr, it is like solving the same subproblem for subarrays partitioned by zero
5. initialize prefixProd, suffixProd, maxProd with 1
6. for i in range [0, n-1] both inclusive, multiply products with corresponding elements\
     i.e. prefixProd *= arr[i], suffixProd *= arr[n-1-i]
7. update maxProd with max of the three- maxProd, prefixProd, suffixProd
8. if the prods (except the maxProd) become zero initialize them to 1 indicating a new arr beginning
9. return maxProd
