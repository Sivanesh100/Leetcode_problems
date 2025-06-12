class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, long long> ratioCount;
        long long count = 0;

        for (int i = 0; i < rectangles.size(); i++) {
            int width = rectangles[i][0];
            int height = rectangles[i][1];
            double ratio = (double)width / height;

            count += ratioCount[ratio];
            ratioCount[ratio]++;
        }

        return count;
    }
};
