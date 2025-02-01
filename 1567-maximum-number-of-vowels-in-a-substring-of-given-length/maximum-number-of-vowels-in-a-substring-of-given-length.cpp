class Solution {
    private:
    bool isVowel(char ch){
        switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
        }
    }
public:
    int maxVowels(string s, int k) {
        int i =0,j=0;
        int count  = 0 ;
        int maxi = INT_MIN;

        while(j<s.size()){
            if(isVowel(s[j]))
            count++;

            if(j-i+1 == k){
                maxi = max(maxi,count);
                if(isVowel(s[i])){
                    count--;
                }
                i++;
            }
            j++;
        } 
        return maxi;
    }
};