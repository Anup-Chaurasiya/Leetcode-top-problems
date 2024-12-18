class Solution {
private: 
    void reverseArray(vector<int>& nums, int l, int h){
        int first = l;
        int second = h-1; 
        while(first<second){
            swap(nums[first++],nums[second--]);
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverseArray(nums,0,n-k);
        reverseArray(nums,n-k,n);
        reverseArray(nums,0,n);

    }
};