class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mpp;
        vector<int>ans;

        for(auto it : arr1){
            mpp[it]++;
        }
        for(auto it : arr2){
            if(mpp.find(it) != mpp.end()){
                int count = mpp[it];
                while(count--){
                    ans.push_back(it);
                }
                mpp.erase(it);
            }
        }

        for(auto it : mpp){
            int count = it.second;
            while(count--){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};

