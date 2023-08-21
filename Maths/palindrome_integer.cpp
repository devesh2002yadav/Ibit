int Solution::isPalindrome(int A) 
{
    string s=to_string(A);
    int n=s.size();
    for(int i=0; i<n/2; i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
