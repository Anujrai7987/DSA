class Solution {
public:
    int divide(int dividend, int divisor) {
        // 1. Handle LeetCode's overflow edge case
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }

        // 2. Determine the sign of the result before converting to absolute values
        // If one is negative and the other is positive, the result is negative.
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // 3. Work with absolute values using long long to prevent integer overflow
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        long long s = 0;
        long long e = absDividend;
        long long ans = 0;
        
        // 4. Your working Binary Search loop
        while (s <= e){
            long long mid = s + (e - s) / 2;
            
            if (mid * absDivisor == absDividend){
                ans = mid;
                break;
            }
            else if (mid * absDivisor > absDividend){
                e = mid - 1;
            }
            else {
                s = mid + 1;
                ans = mid;
            }
        }
        
        // 5. Fixed conditional check and return logic
        if (isNegative) {
            return -ans;
        } 
        else {
            return ans;
        }
    }
};