vector<vector<int> > Solution::generateMatrix(int A) 
{
    vector<vector<int>> ans(A, vector<int>(A, 0));
    if(A==1)
    {
        ans[0][0]=1;
        return ans;
    }
    int x=1;
    int top=0; int right=A-1; int bot=A-1; int left=0;
    while(x<=A*A)
    {   
        for(int i=left; i<=right; i++)
        {
            ans[top][i]=x;
            x++;
        }
        top++;
        
        for(int i=top; i<=bot; i++)
        {
            ans[i][right]=x;
            x++;
        }
        right--;
        
        for(int i=right; i>=left; i--)
        {
            ans[bot][i]=x;
            x++;
        }
        bot--;
        
        for(int i=bot; i>=top; i--)
        {
            ans[i][left]=x;
            x++;
        }
        left++;
    }
    return ans;
}
