class Solution {
public:

// // ********** Heap sort *********

// void MaxHeapify(vector<int> &arr, int N, int i) {
//     int largest = i; // 
//     int left = 2 * i + 1;
//     int right = 2 * i + 2; 

//     if (left < N && arr[left] > arr[largest])
//         largest = left;

//     if (right < N && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
        
//         MaxHeapify(arr, N, largest);
//     }
// }

//     vector<int> sortArray(vector<int>& nums) {
//         int size=nums.size();

//         for(int i=size/2-1;i>=0;i--){
//             MaxHeapify(nums, size, i);
//         }

//         while(size>0){
//             swap(nums[0],nums[size-1]);
//             size--;
//             MinHeapify(nums, size, 0);
//         }
//         return nums;
//     }
// };

// ********* Counting Sort **********
vector<int> sortArray(vector<int>& nums){
       unordered_map<int,int>mpp;

       int minValue = INT_MAX; 
       int maxValue = INT_MIN; 
       for(auto i : nums){
           mpp[i]++;
           minValue = min(minValue,i);
           maxValue = max(maxValue,i);
       }
       
       int index = 0;
       for(int i = minValue;i<=maxValue;i++){
           if(mpp.find(i) != mpp.end()){
               int count = mpp[i];
               while(count--){
                   nums[index++] = i ;
               }
           }
       }
       return nums;
    }
};
