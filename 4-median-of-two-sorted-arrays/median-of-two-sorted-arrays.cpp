class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n1=nums1.size(),n2=nums2.size();
      vector<int> res;
      for(int i=0;i<n1;i++)
      {
        res.push_back(nums1[i]);
      }
      for(int i=0;i<n2;i++)
      {
        res.push_back(nums2[i]);
      }
      sort(res.begin(),res.end());
  
      int count=res.size();
      if(count%2==1) 
      {
            return static_cast<double>(res[count/2]);
      }
      else 
      {      
        int middle1=res[count/2-1];
        int middle2=res[count/2];
        return (static_cast<double>(middle1)+static_cast<double>(middle2))/2.0;
       }

    }
};