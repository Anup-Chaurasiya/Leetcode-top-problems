class comp{
    public:
     bool operator()(int a,int b){
        return a>b;
    }
};


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int n = arr.size()/2;
        for(auto it : arr){
            mpp[it]++;
        }

        vector<int>freq;
        for(auto it : mpp){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end(),comp());

        int cnt = 0 ;
        int ans = 0;
        for(auto it : freq){
            ans += it;
            cnt++;
            if(ans>=n){
                break;
            }

        }
        return cnt;
    }
};