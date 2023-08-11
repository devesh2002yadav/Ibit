vector<int> Solution::nextPermutation(vector<int> &A) 
{
    int n = A.size();
    
    // Step 1: Find the first index i from the right such that A[i] < A[i+1]
    int i;
    for (i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            break;
        }
    }
    
    // Step 2: Find the smallest element A[j] to the right of index i that is greater than A[i]
    if (i >= 0) {
        int j;
        for (j = n - 1; j > i; j--) {
            if (A[j] > A[i]) {
                break;
            }
        }
        // Step 3: Swap A[i] and A[j]
        std::swap(A[i], A[j]);
    }
    
    // Step 4: Reverse the elements from index i+1 to the end
    int left = i + 1, right = n - 1;
    while (left < right) {
        std::swap(A[left], A[right]);
        left++;
        right--;
    }
    return A;
}