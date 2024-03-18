// 452. Minimum Number of Arrows to Burst Balloons
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // sort(points.begin(), points.end());
        sort(points.begin(), points.end(), [](const auto& a, const auto& b){
            return a[0] < b[0];
        });

        int arrows = 1;
        int end = points[0][1];

        for(const auto& point: points) {
            if(point[0] > end){
                arrows++;
                end = point[1];
            }
            end = min(end, point[1]);
        }

        return arrows;
    }
};