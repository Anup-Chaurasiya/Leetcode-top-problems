#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> v;

        for (const auto& point : points) {
            int dis = point[0] * point[0] + point[1] * point[1];
            v.push_back({dis, point});
        }

        sort(v.begin(), v.end());

        vector<vector<int>> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
