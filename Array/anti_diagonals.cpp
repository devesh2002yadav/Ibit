vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) 
{
    int n=A.size();
    vector<vector<int>> ans;
    for(int sum=0; sum<2*n-1; sum++)
    {
        vector<int> temp;
        int i=max(0,sum-n+1);
        int j=sum-i;
        while((i>=0&&i<n)&&(j>=0&&j<n))
        {
            temp.push_back(A[i][j]);
            i++;
            j--;
        }
        ans.push_back(temp);
    }
    return ans;
}