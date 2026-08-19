class Solution {
public:
    int maxArea(vector<int>& height) {

        int max_water=0;
        int max_area=0;
        int start=0;
        int end= height.size()-1;
        while(start<end){

            int width=end-start;
            max_water=min(height[start],height[end]);
            int area=width*max_water;
            max_area=max(max_area,area);

            if(height[start]<height[end]){
                start++;
            }
            else {
                end--;
            }



        }
        return max_area;
        
    }
};