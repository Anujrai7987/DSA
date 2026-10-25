
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it = freq.begin(); it != freq.end(); it++) {
            bucket[it->second].push_back(it->first);
        }

        vector<int> ans;

        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int j = 0; j < bucket[i].size(); j++) {
                ans.push_back(bucket[i][j]);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};
