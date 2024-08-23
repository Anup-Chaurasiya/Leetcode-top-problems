class Solution {
public:


    void lpsfind( vector<int> &lps,string s){
        int pre=0,suf=1;
        while(suf<s.size()){
            // match
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            // not match
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }

    }

    int strStr(string h, string n) {
        vector<int>lps(n.size(),0);
        lpsfind(lps,n);
        
        int first=0,second = 0;

        while(first<h.size() && second<n.size()){
            // match
            if(h[first]==n[second]){
                first++;
                second++;
            }
            else {
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }
        if(second==n.size()){
            return first-second;
        }
        return -1;

    }
};