class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        int row=mat.size();
        int col=mat[0].size();
        int max=0;
        vector<int> res(2,0);
        for(int i=0;i<row;i++)
        {
            int c=0;
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            if(c>res[1])
            {
                res[0]=i;
                res[1]=c;
            }
        }
        return res;
    }
};