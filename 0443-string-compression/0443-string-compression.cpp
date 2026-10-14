
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int read = 0;
        int write = 0;

        while (read < n) {
            char ch = chars[read];
            int cnt = 0;

            while (read < n && chars[read] == ch) {
                cnt++;
                read++;
            }

            chars[write++] = ch;

            if (cnt > 1) {
                string count = to_string(cnt);

                for (char digit : count) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};
