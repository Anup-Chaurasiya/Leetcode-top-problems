class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int s=0,e=nums1.size();
        // vector<int>ans;
        // int begin=0,finish=nums2.size();
        // while(s<e && begin<finish){
        //     if(nums1[s]<nums2[begin]){
        //         ans.push_back(nums1[s]);
        //         s++;
        //     }
        //     else{
        //         ans.push_back(nums2[begin]);
        //         begin++;
        //     }
        // }
        // while(s<e){
        //     ans.push_back(nums1[s]);
        //     s++;
        // }
        //  while(begin<finish){
        //     ans.push_back(nums2[begin]);
        //     begin++;
        // }
        // int n=ans.size();
        // if(n%2==0){
        //     return (ans[n/2-1]+ans[n/2])/2.0;
        // }
        // else{
        //     return ans[n/2];
        // }

        // end

    

        // Ensure nums1 is the smaller array to minimize the binary search range
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];

            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // Correct partition found
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } else {
                    return max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                // Move towards the left in nums1
                high = partition1 - 1;
            } else {
                // Move towards the right in nums1
                low = partition1 + 1;
            }
        }

        // If input arrays are not sorted or something goes wrong, throw an exception
        throw invalid_argument("Input arrays are not sorted or invalid input.");
    }

};