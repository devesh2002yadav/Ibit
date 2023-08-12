int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n<2)
    {
        return 0;
    }
    vector<int>B=A;
    sort(B.begin(), B.end());
    int diff = B[1] - B[0];
    for (int i = 0; i < n - 1; i++) {
        diff = max(diff, B[i + 1] - B[i]);
    }
    return diff;
}