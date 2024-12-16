class Solution {
private:
    void sortArray1(vector<int>&nums){
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
    }

     void sortArray2(vector<int>&nums){
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
    }
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sortArray1(seats);
        sortArray2(students);

        int n= seats.size();
        int sum = 0 ;
        for(int i=0;i<n;i++){
            int diff = abs(seats[i]-students[i]);
            sum += diff;
        }

        return sum ;

    }
};