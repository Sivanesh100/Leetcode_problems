class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {

       int row=matrix.size();
       int col=matrix[0].size();
       vector<int> index(col,INT_MIN);

       for(int i=0;i<row;i++)
       {
          for(int j=0;j<col;j++)
          {
              if(matrix[i][j]!=-1)
              {
                index[j]=max(index[j],matrix[i][j]);
              }
          }
       } 

        for(int i=0;i<row;i++)
        {
           for(int j=0;j<col;j++)
           {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=index[j];
                }
           }
        }
        return matrix;   
    }
};