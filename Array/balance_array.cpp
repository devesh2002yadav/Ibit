int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    vector<int> evenPrefixSum(n + 1, 0);
    vector<int> oddPrefixSum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        evenPrefixSum[i + 1] = evenPrefixSum[i];
        oddPrefixSum[i + 1] = oddPrefixSum[i];

        if (i % 2 == 0) {
            evenPrefixSum[i + 1] += A[i];
        } else {
            oddPrefixSum[i + 1] += A[i];
        }
    }

    int specialCount = 0;
    for (int i = 0; i < n; ++i) {
        int leftEven = evenPrefixSum[i];
        int rightEven = evenPrefixSum[n] - evenPrefixSum[i + 1];
        int leftOdd = oddPrefixSum[i];
        int rightOdd = oddPrefixSum[n] - oddPrefixSum[i + 1];

        if (leftEven + rightOdd == leftOdd + rightEven) {
            specialCount++;
        }
    }

    return specialCount;
}