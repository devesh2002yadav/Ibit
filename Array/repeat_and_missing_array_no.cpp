vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int xor_sum = 0;
    for (int i = 1; i <= n; i++) {
        xor_sum ^= i;
    }
    for (int i = 0; i < n; i++) {
        xor_sum ^= A[i];
    }
    
    // Find the rightmost set bit in xor_sum
    int rightmost_set_bit = xor_sum & -xor_sum;
    
    int x = 0, y = 0;
    for (int i = 1; i <= n; i++) {
        if (i & rightmost_set_bit) {
            x ^= i;
        } else {
            y ^= i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] & rightmost_set_bit) {
            x ^= A[i];
        } else {
            y ^= A[i];
        }
    }
    
    // Check which one is repeated and which one is missing
    for (int num : A) {
        if (num == x) {
            return {x, y};
        }
    }
    return {y, x};
}