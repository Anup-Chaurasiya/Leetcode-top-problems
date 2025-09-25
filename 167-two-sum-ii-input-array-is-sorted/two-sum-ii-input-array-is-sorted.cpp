class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         unordered_map<int ,int > mpp;
        int n =numbers.size()-1;

        int s=0;
        while(s<n){
            if(numbers[s] + numbers[n]==target){
                return {s+1,n+1};
            }
            else if(numbers[s] + numbers[n] > target){
                n--;
            }
            else{
                s++;
            }
        }
        
        return {};
    }
};