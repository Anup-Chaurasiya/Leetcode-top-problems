class Solution {
private:

bool isPalindrome(string s,int first,int second){
    while(first<=second){
        if(s[first++]!=s[second--]) return false;

    }

    return true;

}

void findSubstrPalindrome(string &s, int index, vector<string>& path, vector<vector<string>>&result){
       
    if(index==s.size()){
        result.push_back(path);
        return ;
    }

    for(int i = index; i<s.size(); i++){
        if(isPalindrome(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            findSubstrPalindrome(s,i+1,path,result);
            path.pop_back();
        }
    }
 }

public:
    vector<vector<string>> partition(string s) {
        vector<string>path;
        vector<vector<string>>result;
        findSubstrPalindrome(s,0,path,result);
        return result;
    }
};