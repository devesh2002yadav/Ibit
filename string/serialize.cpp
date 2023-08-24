string Solution::serialize(vector<string> &A) 
{
    int n=A.size();
    string ans="";
    for(int i=0; i<n; i++)
    {
        string s=A[i];
        int m=s.size();
        ans+=s;
        string x=to_string(m);
        ans+=x;
        ans+="~";
    }
    return ans;
}
