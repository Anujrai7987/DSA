class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int top = 0;
        int bottom = matrix.size() - 1;
        int start = 0;
        int end = matrix[0].size() - 1;

        while(top <= bottom && start <= end) {

            // left → right
            for(int j = start; j <= end; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            // top → bottom
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][end]);
            }
            end--;

            // right → left
            if(top <= bottom) {
                for(int j = end; j >= start; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // bottom → top
            if(start <= end) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][start]);
                }
                start++;
            }
        }

        return ans;
    }
};