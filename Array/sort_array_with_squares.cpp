vector<int> Solution::solve(vector<int> &A) 
{
    multiset<int> res;
    int n=A.size();
    vector<int> B;
    for(int i=0; i<n; i++)
    {
        A[i]=abs(A[i]);
    }
    for(int i=0; i<n; i++)
    {
        A[i]*=A[i];
        res.insert(A[i]);
    }
    for(const int& el:res)
    {
        B.push_back(el);
    }
    return B;
}