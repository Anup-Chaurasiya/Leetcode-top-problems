class Solution {
public:

void MinHeapify(vector<int> &arr, int N, int i) {
    int largest = i; // 
    int left = 2 * i + 1;
    int right = 2 * i + 2; 

    if (left < N && arr[left] > arr[largest])
        largest = left;

    if (right < N && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        
        MinHeapify(arr, N, largest);
    }
}

    vector<int> sortArray(vector<int>& nums) {
        int size=nums.size();

        for(int i=size/2-1;i>=0;i--){
            MinHeapify(nums, size, i);
        }

        while(size>0){
            swap(nums[0],nums[size-1]);
            size--;
            MinHeapify(nums, size, 0);
        }
        return nums;
    }
};