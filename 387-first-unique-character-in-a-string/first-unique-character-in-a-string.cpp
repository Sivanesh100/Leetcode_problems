class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> res;
        for(int i=0;i<s.length();i++)
        {
            res[s[i]]++;
        }
        for(int j=0;j<s.length();j++)
        {
            if(res[s[j]]==1)
            return j;
        }
        return -1;
    }
};