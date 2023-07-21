class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_tr(numRows, vector<int>(1, 1));
        numRows--;
        
        int i=1;
        while(numRows--){
            for(int j=0; j<i-1; j++){
                pascal_tr[i].push_back(pascal_tr[i-1][j]+pascal_tr[i-1][j+1]);
            }
            pascal_tr[i].push_back(1);
            i++;
        }
        return pascal_tr;
    }
};
