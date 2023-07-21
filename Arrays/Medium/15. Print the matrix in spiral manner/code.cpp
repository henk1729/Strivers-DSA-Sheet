class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // define limits
        int n = matrix.size(), m = matrix[0].size(), topLim = 0, rgtLim = m-1, btmLim = n-1, lftLim = 0;
        vector<int> spiral;

        int r = 0, c = 0;
        while(topLim <= btmLim && lftLim <= rgtLim){
            // push top row
            while(c <= rgtLim) spiral.push_back(matrix[r][c++]);
            topLim++; // suppress topLim
            c--;
            r++;

            if(spiral.size() == n*m) break;

            // push last col
            while(r <= btmLim) spiral.push_back(matrix[r++][c]);
            rgtLim--; // suppress btmLim
            r--;
            c--;

            if(spiral.size() == n*m) break;

            // push bottom row
            while(c >= lftLim) spiral.push_back(matrix[r][c--]);
            btmLim--; // suppress lftLim
            c++;
            r--;

            if(spiral.size() == n*m) break;

            // push first col
            while(r >= topLim) spiral.push_back(matrix[r--][c]);
            lftLim++; // suppress lftLim
            r++;
            c++;

            if(spiral.size() == n*m) break;
        }

        return spiral;
    }
};
