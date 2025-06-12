class Solution {
public:
    int countPairs(vector<int>& d) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> freq;
        int count = 0;

        for (int i = 0; i < d.size(); i++) {
            for (int power = 1; power <= (1 << 22); power <<= 1) {
                int complement = power - d[i];
                if (freq.find(complement) != freq.end()) {
                    count = (count + freq[complement]) % MOD;
                }
            }
            freq[d[i]]++;
        }

        return count;
    }
};
