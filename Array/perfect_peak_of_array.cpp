int Solution::perfectPeak(vector<int> &A) 
{
    int n=A.size();
    vector<int> maxi;
    vector<int> mini;
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx=max(mx, A[i]);
        mn=min(mn, A[n-i-1]);
        maxi.push_back(mx);
        mini.push_back(mn);
    }
    for(int i=1; i<n-1; i++)
    {
        if(A[i]>maxi[i-1]&&A[i]<mini[n-i-2])
        {
            return 1;
        }
    }
    return 0;
}

/*

O(n*n) - simple straight forward

*/