class Solution {
public:
    int balancedStringSplit(string s) {
        int cr=0,cl=0,res=0;
        for(int i=0;i<s.length();i++)
         {
            if(s[i]=='R') cr++;
            else cl++;

            if(cr==cl) res++;
        }
        return res;
    }
};