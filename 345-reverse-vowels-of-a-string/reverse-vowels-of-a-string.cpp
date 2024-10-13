class Solution {

private:

bool isvowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ; 
}

public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            while(i<j && !isvowel(s[i])){
                i++;
            }
            while(i<j && !isvowel(s[j])){
                j--;
            }

            if(i<=j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};