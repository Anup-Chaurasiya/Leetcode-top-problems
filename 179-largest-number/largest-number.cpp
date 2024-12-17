
bool comp(int a,int b){
    return to_string(a)+to_string(b) > to_string(b)+to_string(a); 
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans = "";
        sort(nums.begin(),nums.end(),comp);

        for(auto it : nums){
            ans += to_string(it);
        }

        if(ans[0] == '0') return "0";

        return ans;
    }
};