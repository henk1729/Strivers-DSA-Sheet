### In-place indicating headers { T -> O(N*M), S -> O(1) }:
1. for every element arr[i][j], if it is 0, mark arr[0][j] = 0 and arr[i][0] = 0
2. if j == 0, that is element in first column, take a variable col_0, and set it to 1
3. all the headers (col 0, row 0, and col_0) contain info about corresponding row or col
4. for every non-header element i.e. i > 0, j > 0, set arr[i][j] = 0, if arr[0][j] == 0 or arr[i][0] == 0
5. then move towards row 0 elements, refer arr[0][0] for this
6. for col 0 elements, refer col_0 variable
