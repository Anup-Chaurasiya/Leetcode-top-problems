class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        else{
            return false;
        }

        
        // another method
        /*
        unordered_map<char,int>temp1;
        unordered_map<char,int>temp2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            temp1[i]++;
            temp2[i]++;
        }
        if(temp1=temp2){
            return true;
        }
        else{
            return false;
        }
        */
    }
};