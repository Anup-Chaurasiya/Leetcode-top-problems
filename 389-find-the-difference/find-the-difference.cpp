class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,char>mpp;

        for(auto it : s){
            mpp[it]++;
        }

        for(auto it : t){
            if(mpp[it]==0){
                return it;
            }
            else{
                mpp[it]--;
            }
        }
        return '\0';
    }
};