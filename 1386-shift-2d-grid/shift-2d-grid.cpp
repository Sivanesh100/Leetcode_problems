class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
 
       int row=grid.size();
       int col=grid[0].size();
       int tot=row*col;
       vector<int> res(tot);
       vector<int> temp;
       vector<vector<int>> result(row,vector<int>(col));

       for(int i=0;i<row;i++)
       {
          for(int j=0;j<col;j++)
          {
            temp.push_back(grid[i][j]);
          }
       }

       for(int i=0;i<tot;i++)
       {
           res[(i+k)%tot]=temp[i];
       }
       
       for(int i=0;i<tot;i++)
       {
            result[i/col][i%col]=res[i];
       } 
       return result;

    }
};