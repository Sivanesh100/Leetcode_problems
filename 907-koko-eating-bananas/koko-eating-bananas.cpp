class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int res=high;

        while(low<=high)
        {
            long mid=low+(high-low)/2;
            long hours=0;

            for (int i=0;i<piles.size();i++) 
            {
                hours+=(piles[i]+mid-1)/mid;
            }

            if(hours<=h)
            {
                res=mid;           
                high=mid-1;
            }
            else
            {
                low=mid+1;       
            }
        }

        return res;
    }
};
