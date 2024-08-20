class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        vector<int> result;
        
        for(int num : nums) {
            freqMap[num]++;
        }
        
        for(auto& it : freqMap) {
            if(it.second > nums.size() / 3) {
                result.push_back(it.first);
            }
        }
        
        return result;
    }
};
