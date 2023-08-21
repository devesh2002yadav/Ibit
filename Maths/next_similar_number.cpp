string Solution::solve(string A) 
{
    int n = A.length();
    int i = n - 2;

    while (i >= 0 && A[i] >= A[i + 1]) {
        i--;
    }

    if (i == -1) {
        return "-1"; // No greater permutation possible
    }

    int j = n - 1;
    while (A[j] <= A[i]) {
        j--;
    }

    swap(A[i], A[j]);
    reverse(A.begin() + i + 1, A.end());

    return A;
}
