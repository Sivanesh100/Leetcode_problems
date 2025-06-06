class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        int n=columnTitle.length();
        for(int i=0;i<n;i++)
        {
            int val=columnTitle[i]-'A'+1;
            res=res*26+val;
        }
        return res;
    }
};