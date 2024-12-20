class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>countNum;

        for(auto & interval : nums){
            for(int i=interval[0];i<=interval[1];i++){
                countNum.insert(i);
            }
        }

        return countNum.size();

    }
};