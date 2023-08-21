#include <string>

int Solution::reverse(int N) 
{
    int reversed = 0;

    while (N != 0) {
        // Check for overflow before updating the reversed value
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            return 0;
        }

        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }

    return reversed;
}


/*

int Solution::reverse(int A) {
    long long int ans = 0;
    while (A != 0) {
        ans = ans*10 + A%10;
        A = A/10;
    }
    if (ans > INT_MAX || ans < INT_MIN) return 0;
    else return ans;
}


*/