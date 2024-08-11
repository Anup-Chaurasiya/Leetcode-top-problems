class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>ans;
        for(int i=0;i<m.size();i++){
            ans[m[i]]++;
        }
        for(int i=0;i<r.size();i++){
            if(ans[r[i]]>0){
                ans[r[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};