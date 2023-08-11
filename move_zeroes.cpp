vector<int> Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int nonZeroCount=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]!=0)
        {
            A[nonZeroCount++] = A[i];
        }
    }
    for (int i = nonZeroCount; i < n; i++)
    {
        A[i] = 0;
    }
    return A;
}