### Observation { T -> O(N+N/2), S -> O(1) }:
1. breakpoint (bp) is the first element from end of array which is lesser than the element to its immediate right
2. left part | bp | right part
3. here, left part remains unchanged, bp is swapped by an element just greater than itself in right part
4. then, right part is reversed
5. initially, right part will be arranged in descending order and will be the same after swapping with bp
6. so, to form next permutation, right part should be in ascending order, hence reversed
7. if there are multiple elements which can replace bp, choose the rightmost one; this ensures that after reversing, the swapped bp (lower than element with which it is swapped) appears to the max left it can
8. if there's no bp i.e. array is in descending order, just reverse the array; here there's no left part or bp
