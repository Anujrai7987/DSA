class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int size=s.size();
        int end=size-1;

        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;

        }
        
        
    }
};