class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mag;

        for(int i=0;i<magazine.size();i++)
         {
            char c=magazine[i];
            mag[c]++;
        }
        for(int i=0;i<ransomNote.size();i++)
         {
            char c=ransomNote[i];
            if(mag[c]<=0) 
            {
                return false;
            }
            mag[c]--;
        }

        return true;
    }
};
