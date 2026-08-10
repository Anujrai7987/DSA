class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxLen=0;

        unordered_set<char> mp;

        for(int right=0;right<s.length();right++){

             while(mp.count(s[right])){
            mp.erase(s[left]);
            left++;
        }

        mp.insert(s[right]);

        maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
        
    }
};