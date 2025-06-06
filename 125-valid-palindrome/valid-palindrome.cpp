class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>res;
        for(int i=0;i<s.size();i++)
        {
            char tem=s[i];
            if(isalnum(tem))
            {
              if(isalpha(tem))
              {
                 res.push_back(tolower(tem));
              }
              else
              {
                res.push_back(tem);
              }
            }
        }
        
        int left=0,right=res.size()-1;

        while(left<right)
        {
            if(res[left]!=res[right]) return false;

            left++;
            right--;
        }
        return true;
    }
};