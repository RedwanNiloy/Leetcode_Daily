Approach 1 


class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; a++) {  // Iterate through all possible values of `a`
            double b = sqrt(c - a * a);      // Compute `b` as the square root of `c - a^2`
            if (b == (int)b) {                // Check if `b` is an integer
                return true;                  // If `b` is an integer, return true
            }
        }
        return false;                         // If no such pair `(a, b)` is found, return false
    }
};



Approach 2


#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll left = 0, right = (long long int)sqrt(c);
        while(left <= right) {
            if(left * left + right * right == c) return true;
            else if(left * left + right * right > c) right--;
            else left++;
        }

        return false;
    }
};
