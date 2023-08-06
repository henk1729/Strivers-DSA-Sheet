### Lower bound and upper bound { T -> 2*O(logN), S -> O(1) }:
1. if, arr = [1, 3, 4, 8, 8, 8, 8, 11, 13]\
    lb -> smallest element >= given (returns first index)\
    ub -> smallest element > given \
    lower_bound(8) = 3 (first index at which 8 occurs)\
    upper_bound(8) = 7 (first index at which element > 8 occurs)
2. so, if, lb == n || arr[lb] != x, return {-1, -1}
3. else, return {lb, ub-1}

### Binary search (3 conditions) { T -> 2*O(logN), S -> O(1) }:
1. make separate functions for first and last position of given number
2. initialize startPos = -1
3. while lo <= hi
4. if(x == arr[mid]), update startPos, move left i.e. hi = mid-1
5. else if(x < arr[mid]), move left
6. else, move right
7. return startPos
8. if startPos == -1, return {-1, -1}, end
9. initialize endPos = -1
10. while lo <= hi
11. if(x == arr[mid]), update endPos, move right i.e. lo = mid+1
12. else if(x < arr[mid]), move left
13. else, move right
14. return endPos
14. return {startPos, endPos}

### Binary search (3 conditions) { T -> 2*O(logN), S -> O(1) }:
1. make separate functions for first and last position of given number
2. find smallest no. >= given no. for end pos and greatest no. <= given no. for start pos
3. for start position, initialize startPos = n and minimize it
4. while lo <= hi
5.     if(x <= arr[mid]){
            startPos = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
6. if startPos is an index (!= n) and value at that index == given no. then return arr[startPos], else return -1
7. for end position, initialize endPos = -1 and maximize it
8. while lo <= hi
9.     if(x >= arr[mid]){
            endPos = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
10. if endPos is an index (!= -1) and value at that index == given no. then return arr[endPos], else return -1

