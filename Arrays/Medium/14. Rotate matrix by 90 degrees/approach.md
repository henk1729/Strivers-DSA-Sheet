### Transpose and reverse { T -> O(N*N/2) }:
1 2 3  ->   7 4 1\
4 5 6  ->   8 5 2\
7 8 9  ->   9 6 3
1. one way to right-rotate is to transpose the matrix and then reverse every row in it
2. i.e. swap(matrix[i][j], matrix[j][i]) and reverse(matrix[i].begin(), matrix[i].end())

### General point assignment - I:
1. use a 2D matrix
2. for every pt, new_matrix[j][n-1-i] = matrix[i][j] 

### General point assignment - II:
1. for k in range (n+1)/2
2. for i in range n-2*k-1, i.e. 1 less than no. of cells in curr inner square side
3. do
// corner pts (for curr inner square) in cyclic order:
            // 1st -> (rowInd, rowInd)
            // 2nd -> (rowInd, n-1-rowInd)
            // 3rd -> (n-1-rowInd, n-1-rowInd)
            // 4th -> (n-1-rowInd, rowInd)
// pts for varying i
                // 1st pt -> (rowInd, rowInd+i)
                // 2nd pt -> (rowInd+i, n-1-rowInd)
                // 3rd pt -> (n-1-rowInd, n-1-rowInd-i)
                // 4th pt -> (n-1-rowInd-i, rowInd)

