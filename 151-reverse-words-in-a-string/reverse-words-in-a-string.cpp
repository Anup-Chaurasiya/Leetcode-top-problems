
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";
        string ans = "";

        // Iterate over the string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (temp.size() > 0) {
                    st.push(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
        
        // Push the last word if it exists
        if (temp.size() > 0) {
            st.push(temp);
        }

        // Construct the result by popping from the stack
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) {
                ans += " ";
            }
        }

        return ans;
    }
};