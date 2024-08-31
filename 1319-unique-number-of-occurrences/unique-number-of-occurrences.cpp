class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        unordered_set<int>fre;

        for(auto it : mpp){
            fre.insert(it.second);
        }
        return fre.size()==mpp.size();
    }
};