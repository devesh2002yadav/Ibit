
vector<vector<int> > Solution::solve(int A) 
{
    vector<vector<int>> pasca;
    if(A==0)
    {
        return pasca;
    }
    else if(A==1)
    {
        vector<int> one;
        one.push_back(1);
        pasca.push_back(one);
        return pasca;
    }
    else 
    {
    vector<int> one;
    one.push_back(1);
    pasca.push_back(one);
    vector<int> two;
    two.push_back(1);
    two.push_back(1);
    pasca.push_back(two);
    
    for(int i=1; i<A-1; i++)
    {
        vector<int> push;
        push.push_back(1);
        for(int j=0; j<pasca[i].size()-1; j++)
        {
            int x=pasca[i][j]+pasca[i][j+1];
            push.push_back(x);
        }
        push.push_back(1);
        pasca.push_back(push);
    }
    return pasca;
    }
}