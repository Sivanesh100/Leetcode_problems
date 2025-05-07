class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int con=n*n;
        int weight=0;
        int count=0;
        while(count<con&&weight+w<=maxWeight)
        {
            weight+=w;
            count++;
        }
        return count;
    }
};