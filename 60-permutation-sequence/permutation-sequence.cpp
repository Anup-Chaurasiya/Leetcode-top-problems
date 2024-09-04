class Solution {
    private:

    void permutationSeq(int index, int& curr, string s, int k, string &ans){
        if(ans!="") return ;
        if(index==s.size()){
           curr++;
           if(curr==k) ans=s;
            return;
        }

        for(int i=index;i<s.size();i++){
            swap(s[i],s[index]);
            sort(s.begin()+index+1,s.end());
            permutationSeq(index+1,curr,s,k,ans);
            swap(s[index],s[i]);
        }
    }

public:
    string getPermutation(int n, int k) {
        string ans="";
        string s="";
        int curr=0;
        for(int i=1;i<=n;i++){
            s +=to_string(i);
        }
        permutationSeq(0,curr,s,k,ans);
        return ans;
    }
};