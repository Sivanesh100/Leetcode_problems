class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int j = s.size() - 1;

        // Skip trailing spaces
        while (j >= 0 && s[j] == ' ') {
            j--;
        }

        // Count the characters of the last word
        for (int i = j; i >= 0; i--) {
            if (s[i] == ' ') break;
            count++;
        }

        return count;
    }
};
