class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>m(10001,0);

        for(auto & trip : trips){
            int from = trip[1];
            int to = trip[2];
            
            m[from] += trip[0];
            m[to] -= trip[0];

        }
        int sum =0;
        for(auto it : m){
            sum += it;
            if(sum>capacity){
                return false;
            }
        }
        return true;
    }
};