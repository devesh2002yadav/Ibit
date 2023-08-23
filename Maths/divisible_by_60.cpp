int Solution::divisibleBy60(vector<int> &A) 
{
    int n=A.size();
    if(n==1)
    {
        if(A[0]==0)
        {
            return 1;
        }
        else return 0;
    }
    int sum=0;
    int even=0;
    int zero=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]%2==0)
        {
            even++;
        }
        if(A[i]==0)
        {
            zero++;
        }
        sum+=A[i];
    }
    if(sum%3==0&&even>=2&&zero>=1)
    {
        return 1;
    }
    return 0;
}
