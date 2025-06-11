class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length()) return false;

        unordered_map<char,int> res;

        for(int i=0;i<s.length();i++)
        {
            res[s[i]]++;
        }

        for(int i=0;i<t.length();i++)
        {
            if(res.find(t[i])==res.end()||res[t[i]]==0)
            {
                return false;
            }
            res[t[i]]--;
        }
        return true;      
    }
};