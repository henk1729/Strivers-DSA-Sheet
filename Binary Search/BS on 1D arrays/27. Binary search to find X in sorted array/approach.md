### Binary search { T -> O(logN), S -> O(1) }:
1. initialize lo = 0, hi = n-1
2. loop while lo <= hi
3. find mid, mid = lo + (hi-lo)/2
4. apply three conditions-\
     // if(target == arr[mid]) return mid;\
     // else if(target < arr[mid]) hi = mid-1;\
     // else lo = mid+1;
5. end loop
6. if lo > hi (default condition to get out of loop), search space is exhausted, target is absent, return -1
