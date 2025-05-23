class Solution {
public:

    static bool line(vector<int>&a,vector<int>&b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& box, int truck) {
        int res=0;

        sort(box.begin(),box.end(),line);
     
        for(int i=0;i<box.size();i++)
        {
            int load=min(box[i][0],truck);
            res+=(load*box[i][1]);
            truck-=load;
            if(truck==0) break;
        }
        return res;
    }
};