class Solution {
private:
    int nums(char n) {
        switch (n) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0; 
        }
    }   
public:
    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums(s[i]) < nums(s[i + 1])) {
                sum -= nums(s[i]);
            } else {
                sum += nums(s[i]);
            }
        }
        sum += nums(s[n - 1]);
        return sum;
    }
};
