vector<string> Solution::deserialize(string A) 
{
    int n=A.size();
    vector<string> ans;
    string s="";
    for(int i=0; i<n; i++)
    {
        char c=A[i];
        if((int)c>96&&(int)c<123)
        {
            s+=c;
        }
        else if(s.size()!=0)
        {
            ans.push_back(s);
            s="";
        }
    }
    return ans;
}
