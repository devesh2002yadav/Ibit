vector<int> Solution::findPerm(const string A, int B) 
{
    vector<int> ans;
    int low=1;
    int high=B;
    
    for(int i=0; i<B-1; i++)
    {
        if(A[i]=='I')
        {
            ans.push_back(low);
            low++;
        }
        if(A[i]=='D')
        {
            ans.push_back(high);
            high--;
        }
    }
    ans.push_back((low+high)/2);
    return ans;
}