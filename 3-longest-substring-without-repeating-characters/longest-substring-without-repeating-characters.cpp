class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i  = 0 , j = 0;
        vector<bool>count(255,0);
        int maxi = 0;
        while(j<s.size()){
            if(count[s[j]]==0){
                count[s[j]] = 1;
                maxi = max(maxi,j-i+1);
                j++;
            }
            else{
                while(count[s[j]]){
                   count[s[i]]=0;
                   i++;

                }
            }
        }
        return maxi;
    }
};