class Solution {
    private:
    bool isVowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }
}
public:
    int maxVowels(string s, int k) {
        int count=0,ans=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))
            count++;
        }

        ans=count;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])){
                count++;
            }
            if(isVowel(s[i-k]))
            count--;

            ans=max(ans,count);
        }

        return ans;
    }
};