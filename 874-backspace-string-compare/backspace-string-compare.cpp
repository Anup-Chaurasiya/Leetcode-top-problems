#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string r1 = "", r2 = "";

        // Process the first string
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                r1 += ch;
            } else if (ch == '#' && !r1.empty()) {
                r1.pop_back();
            }
        }

        // Process the second string
        for (char ch : t) {
            if (ch >= 'a' && ch <= 'z') {
                r2 += ch;
            } else if (ch == '#' && !r2.empty()) {
                r2.pop_back();
            }
        }

        
        return r1 == r2;
    }
};
