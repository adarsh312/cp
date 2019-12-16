class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[n][m];
         for(int i=0;i<n;i++)
        {        for(int j=0;j<m;j++)
                        arr[i][j] = 0;
        // cout<<endl;
         }

        for(int i=0;i<indices.size();i++)
        {
            int x = indices[i][0];
            int y = indices[i][1];
            for(int j=0;j<m;j++)
                arr[x][j]++;
            for(int j=0;j<n;j++)
                arr[j][y]++;
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {                    for(int j=0;j<m;j++)
                        if(arr[i][j]%2==1)
                            count++;
        // cout<<endl;
         }
        return count;
        // return 0;
         }
};
