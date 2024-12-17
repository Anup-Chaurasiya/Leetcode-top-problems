class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mpp;
        string ans = "";
        for(char it : s){
            mpp[it]++;
        }
        for(char it : order){
            if(mpp.find(it) != mpp.end()){
                int count = mpp[it];
                while(count--)
                ans += it;
            }
            mpp.erase(it);
        }

        for(auto it : mpp){
            while(it.second--){
                ans +=it.first;
            }
        }
        return ans;
    }
};