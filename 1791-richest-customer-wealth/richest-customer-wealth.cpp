class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int rich=0,sum=0;
        for(int i=0;i<row;i++)
        {
            sum=0;
            for(int j=0;j<col;j++)
            {
                sum+=accounts[i][j];
            }

            rich=max(rich, sum);
        }

        return rich;
    }
};