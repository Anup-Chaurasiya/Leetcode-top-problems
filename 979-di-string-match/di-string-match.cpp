class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int>res(n+1);
        int leftPointer = 0;
        int rightPointer = s.size();

        int index=0;

        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                res[index++] = leftPointer++;
            }
            else{
                res[index++] = rightPointer--;
            }
        }
        if(s[n-1]=='I') res[index] = leftPointer;
        else res[index] = rightPointer;

        return res;

    }
};