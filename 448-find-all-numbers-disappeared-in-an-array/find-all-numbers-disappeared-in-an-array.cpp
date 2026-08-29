#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_set<int> st;
        vector<int> result;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for(int i = 1; i <= n; i++) {
            if(st.find(i) == st.end()) {
                result.push_back(i);
            }
        }

        return result;
    }
};