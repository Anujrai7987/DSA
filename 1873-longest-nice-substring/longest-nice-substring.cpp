
class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                string sub = s.substr(i, j - i + 1);
                bool nice = true;

                for (int k = 0; k < sub.length(); k++) {
                    char ch = sub[k];

                    if (islower(ch)) {
                        if (sub.find(toupper(ch)) == string::npos) {
                            nice = false;
                            break;
                        }
                    }
                    else {
                        if (sub.find(tolower(ch)) == string::npos) {
                            nice = false;
                            break;
                        }
                    }
                }

                if (nice && sub.length() > ans.length()) {
                    ans = sub;
                }
            }
        }

        return ans;
    }
};
