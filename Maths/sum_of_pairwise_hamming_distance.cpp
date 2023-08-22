int hamming_distance(int x, int y) {
    int xorResult = x ^ y;
    int distance = 0;

    // Count the number of set bits in xorResult
    while (xorResult > 0) {
        if (xorResult & 1) {
            distance++;
        }
        xorResult >>= 1; // Shift xorResult to the right by 1
    }

    return distance;
}

int Solution::hammingDistance(const vector<int> &A) 
{
    const int MOD = 1000000007;
    int n = A.size();
    long long result = 0;

    for (int bit = 0; bit < 31; ++bit) 
    { 
        // Considering each bit position
        int countSetBits = 0;
        for (int num : A) {
            if (num & (1 << bit)) {
                countSetBits++;
            }
        }
        int countUnsetBits = n - countSetBits;
        long long contribution = ((long long)countSetBits * countUnsetBits) % MOD;
        result = (result + contribution) % MOD;
    }
    return (2 * result) % MOD;
}
