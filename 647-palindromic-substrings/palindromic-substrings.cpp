class Solution {
public:
    // Helper function to check if a specific substring is a palindrome
    // Time Complexity: O(n)
    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false; // Character mismatch, not a palindrome
            }
            left++;
            right--;
        }
        return true; // All characters matched
    }

    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        // Loop 1: Select the starting point of the substring
        for (int i = 0; i < n; i++) {
            
            // Loop 2: Select the ending point of the substring
            for (int j = i; j < n; j++) {
                
                // Loop 3 (Inside helper): Check if the substring from index i to j is a palindrome
                if (isPalindrome(s, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
};