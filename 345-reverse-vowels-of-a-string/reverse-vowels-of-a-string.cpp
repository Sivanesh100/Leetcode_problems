class Solution {
public:

    bool check(char ch)
    {
        char c=tolower(ch);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        
        int left=0;
        int right=s.size();

        while(left<right)
        {
            if(check(s[left])&&check(s[right]))
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!check(s[left]))
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return s;
    }
};