class Solution {
    public:
    void findsubSet(vector<int> &arr,int index,vector<int>& sum, int n,vector<vector<int>> &result){
        if(index>=n){
            result.push_back(sum);
            return ;
        }
        
         findsubSet(arr,index+1,sum,n,result);
         sum.push_back(arr[index]);
         findsubSet(arr,index+1,sum,n,result);
         sum.pop_back();

        
    }

public:
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>result;
        int n=arr.size();
        int index=0;
        vector<int>sum;
       findsubSet(arr,index,sum,n,result);
       
       return result;
    }
};