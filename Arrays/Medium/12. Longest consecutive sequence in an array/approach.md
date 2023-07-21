### Set approach { T -> O(2*N), S -> O(N) }:
1. insert all the elements in a set
2. for each element 'e' in the set, check if it's the start of a new subsequence i.e. check if 'e-1' is absent in the set
3. if absent, start counting the sequence length
4. update max length
