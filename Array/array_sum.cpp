vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) 
{
    int n=A.size();
    int m=B.size();
    
    vector<int> ans;
    int carry=0;
    
    if(n==m)
    {
    for(int i=n-1; i>=0; i--)
    {
        int x=A[i]+B[i];
        x+=carry;
        if(x<=9)
        {
            ans.push_back(x);
            carry=0;
        }
        else if(x>=10)
        {
            ans.push_back(x-10);
            carry=1;
        }
    }
    if(carry==1)
    {
        ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
    
    else if(n>m)
    {
        int df=n-m;
    for(int i=m-1; i>=0; i--)
    {
        int x=A[i+df]+B[i];
        x+=carry;
        if(x<=9)
        {
            ans.push_back(x);
            carry=0;
        }
        else if(x>=10)
        {
            ans.push_back(x-10);
            carry=1;
        }
    }
    for(int i=df-1; i>=0; i--)
    {
        int y=A[i];
        y+=carry;
        if(y<=9)
        {
            ans.push_back(y);
            carry=0;
        }
        else if(y>=10)
        {
            ans.push_back(y-10);
            carry=1;
        }
    }
    if(carry==1)
    {
        ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
    
    else if(n<m)
    {
    for(int i=n-1; i>=0; i--)
    {
        int x=A[i]+B[i+m-n];
        x+=carry;
        if(x<=9)
        {
            ans.push_back(x);
            carry=0;
        }
        else if(x>=10)
        {
            ans.push_back(x-10);
            carry=1;
        }
    }
    for(int i=m-n-1; i>=0; i--)
    {
        int y=B[i];
        y+=carry;
        if(y<=9)
        {
            ans.push_back(y);
            carry=0;
        }
        else if(y>=10)
        {
            ans.push_back(y-10);
            carry=1;
        }
    }
    if(carry==1)
    {
        ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }

}
