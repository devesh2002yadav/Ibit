int Solution::solve(vector<int> &A, int B) 
{
    int n=A.size(); 
    sort(A.begin(), A.end());
    int x=A[0];
    int y=A[n-1];
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        if(x==y)
        {
            return 1;
        }
        else if(x!=y && B+x==y)
        {
            return 1;
        }
        else 0;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(A[i]>x&&A[i]<y)
            {
                if(A[i]!=B+x)
                {
                    return 0;
                }
            }
            if(A[i]<y&&A[i]>x)
            {
                if(A[i]+B!=y)
                {
                    return 0;
                }
            }
        }
        return 1;
    }
}

/*

make a set, if size>3 return 0;
if size = 3, check if min+b=mid and max-B=mid
if size=2, check if max-min=B
if size=1 return 1

*/