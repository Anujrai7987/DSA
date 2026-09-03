class Solution {
public:
    int dp[21][21];

    int solve(vector<int>& nums, int start, int end) {
        if (start == end)
            return nums[start];

        if (dp[start][end] != -1)
            return dp[start][end];

        int takeStart = nums[start] - solve(nums, start + 1, end);
        int takeEnd = nums[end] - solve(nums, start, end - 1);

        return dp[start][end] = max(takeStart, takeEnd);
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));

        int difference = solve(nums, 0, nums.size() - 1);

        return difference >= 0;
    }
};