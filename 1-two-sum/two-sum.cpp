class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int first_element=nums[i];
            int second_element=target-first_element;
            if(m.find(second_element)!=m.end()){
                return {m[second_element], i};
            }
            m[first_element]=i;
        }
        return {};
    }
};