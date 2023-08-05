#### CORRECT definition of lower bound(x): smallest element >= x
#### CORRECT definition of upper bound(x): smallest element > x

### Binary search { T-> O(logN), S -> O(1) }:
1. to find lb of x- greatest element >= x
2. initialize lo, hi, and ans = n; loop while lo <= hi
3. evaluate mid
4.   // if(x <= arr[mid]){\
     //     ans = mid;\
     //     hi = mid-1;\
     // }\
     // else{\
     //     lo = mid+1;\
     // }
5. return ans
