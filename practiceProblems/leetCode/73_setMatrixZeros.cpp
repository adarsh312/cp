class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         bool col = false,row = false;
        for(int i=0;i<matrix.size();i++)
            row = matrix[i][0] == 0? true:row;
         for(int i=0;i<matrix[0].size();i++)
            col = matrix[0][i] == 0? true:col;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
               matrix[0][j] = matrix[i][j] == 0? 0:matrix[0][j] ;
               matrix[i][0] = matrix[i][j] == 0? 0:matrix[i][0] ;
            }
        }
        for(int i=1;i<matrix.size();i++) {
            for(int j=1;j<matrix[i].size();j++) {
                
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                     matrix[i][j] = 0;
            }
        }
        // cout<<row;
        // cout<<col;
        if(row)
        for(int i=0;i<matrix.size();i++)
            matrix[i][0] = 0;
        if(col)
        for(int i=0;i<matrix[0].size();i++)
            matrix[0][i] = 0;
        
        
    }
};
