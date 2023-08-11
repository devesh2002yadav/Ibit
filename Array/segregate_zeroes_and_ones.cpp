int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int mn=1e9+1;
    int mx=-1*1e9-1;
    for(int i=0; i<n; i++)
    {
        mn=min(mn, A[i]);
        mx=max(mx, A[i]);
    }
    return mn+mx;
}