class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int ans=0;
        for(int it:gain){
           ans += it;
           maxi=max(maxi,ans);
        }
        return maxi;
    }
};