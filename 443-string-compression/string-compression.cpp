class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int n = chars.size();

        for (int i = 0; i < n; ) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[write++] = curr;

            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};
