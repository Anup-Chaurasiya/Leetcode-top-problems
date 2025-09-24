class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int, int > mpp;
        for(auto it : s){
            mpp[it]++;
        }
        int index=0;
        for(auto it : s){
            if(mpp[it] == 1){
                return index;
            }
            else{
                index++;
            }
        }
        return -1;
    }
};