class Solution {
public:
    int averageValue(vector<int>& nums) {
        int res=0,c=0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]%2==0&&nums[i]%3==0) 
            {  
                res+=nums[i];
                c++;
            }
        }
        if (c==0) {
            return 0;
        }

        return res/c;
    }
};

