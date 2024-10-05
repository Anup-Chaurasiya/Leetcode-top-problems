class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n =nums.size();
    int match=0;
    for(int i=0;i<n;i++){
        
        if(i>match) return false;

        match = max(match , i+nums[i]);

    }
    return true ;
    }
};