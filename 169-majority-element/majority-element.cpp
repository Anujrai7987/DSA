class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        int max_count=0;
        int majority_element=-1;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

            if(mp[nums[i]]>max_count){
                max_count=mp[nums[i]];
                majority_element=nums[i];
            }


            
        }
        return majority_element;


        
    }
};