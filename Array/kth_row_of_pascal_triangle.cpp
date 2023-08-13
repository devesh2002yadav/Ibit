vector<int> Solution::getRow(int A) 
{
    vector<vector<int>> pasca;
    if(A==0)
    {
        return {1};
    }
    else if (A==1)
    {
        return {1, 1};
    }
    else
    {
        vector<int> on;
        on.push_back(1);
        vector<int> tw;
        tw.push_back(1);
        tw.push_back(1);
        pasca.push_back(on);
        pasca.push_back(tw);
        for(int i=2; i<=A; i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j=0; j<i-1; j++)
            {
                temp.push_back(pasca[i-1][j]+pasca[i-1][j+1]);
            }
            temp.push_back(1);
            pasca.push_back(temp);
        }
        return pasca[A];
    }
}

/*

vector<int> Solution::getRow(int n) {
    vector <int> ans;
    int c = 1;
    for (int i = 1; i <= n+1; i++) {
        ans.push_back(c);
        c = c*(n+1-i) / i;
    }
    return ans;
}


*/