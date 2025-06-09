class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<vector<int>> result(n - 2, vector<int>(n - 2, 0));

        for (int i=0; i<n-2;i++) 
        {
            for(int j=0;j<n-2;j++)
            {
                int maxVal = 0;
                for(int dx = 0; dx < 3; dx++) 
                {
                    for (int dy = 0; dy < 3; dy++)
                    {
                        maxVal = max(maxVal, grid[i + dx][j + dy]);
                    }
                }
                result[i][j] = maxVal;
            }
        }

        return result;
    }
};