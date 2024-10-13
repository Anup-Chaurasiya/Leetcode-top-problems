class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string r1="";
        string r2="";
       for(char ch : s){
        if(ch>='a' && ch<='z'){
                r1 += ch;
            }
            else if(ch=='#' && !r1.empty()){
                r1.pop_back();
            }
       }

        for(char ct : t){
            if(ct>='a' && ct<='z'){
                r2 += ct;
            }
            else if(ct=='#' && !r2.empty()){
                r2.pop_back();
            }
        }

        return r1==r2;
    }
};