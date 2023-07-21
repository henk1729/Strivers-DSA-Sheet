class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int rowInd = 0; rowInd < (n+1)/2; rowInd++){
            // corner pts in cyclic order:
            // 1st -> (rowInd, rowInd)
            // 2nd -> (rowInd, n-1-rowInd)
            // 3rd -> (n-1-rowInd, n-1-rowInd)
            // 4th -> (n-1-rowInd, rowInd)
            for(int i = 0; i < n-2*rowInd-1; i++){
                // pts for varying i
                // 1st pt -> (rowInd, rowInd+i)
                // 2nd pt -> (rowInd+i, n-1-rowInd)
                // 3rd pt -> (n-1-rowInd, n-1-rowInd-i)
                // 4th pt -> (n-1-rowInd-i, rowInd)

                int temp                         = matrix[n-1-rowInd-i][rowInd];     //4th in temp
                matrix[n-1-rowInd-i][rowInd]     = matrix[n-1-rowInd][n-1-rowInd-i]; //3rd in 4th
                matrix[n-1-rowInd][n-1-rowInd-i] = matrix[rowInd+i][n-1-rowInd];     //2nd in 3rd
                matrix[rowInd+i][n-1-rowInd]     = matrix[rowInd][rowInd+i];         //1st in 2nd
                matrix[rowInd][rowInd+i]         = temp;                             //4th in 1st
            }
        }
    }
};
