class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int a=nums[i];

            if(set.find(a)!=set.end()){
                ans.push_back(a);
                return a;
            }
            else {
                set.insert(a);
            }
        }
        return {};
        
    }
};