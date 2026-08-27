class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int start = m - 1;
        int end = n - 1;
        int pos = m + n - 1;

        while(start >= 0 && end >= 0) {

            if(nums1[start] > nums2[end]) {
                nums1[pos] = nums1[start];
                start--;
            }
            else {
                nums1[pos] = nums2[end];
                end--;
            }

            pos--;
        }

        while(end >= 0) {
            nums1[pos] = nums2[end];
            end--;
            pos--;
        }
    }
};