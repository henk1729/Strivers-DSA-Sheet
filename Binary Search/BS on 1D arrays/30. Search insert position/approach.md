### Binary search { T -> O(logN), S -> O(1) }:
1. apply normal binary search- lo <= hi, 3 conditions == (return), < (hi = mid-1), > (lo = mid+1)
2. return lo (insert position)
3. try modularizing- have a function for binary search
