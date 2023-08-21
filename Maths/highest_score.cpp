int Solution::highestScore(vector<vector<string> > &A) 
{
    int n=A.size();
    unordered_map<string, pair<int, int>> student;
    for(int i=0; i<n; i++)
    {
        if(student.find(A[i][0])==student.end())
        {
            student[A[i][0]]=make_pair(stoi(A[i][1]), 1);
        }
        else
        {
            student[A[i][0]].first+=stoi(A[i][1]);
            student[A[i][0]].second++;
        }
    }
    int mx=0;
    for(auto x:student)
    {
        int cur=x.second.first/x.second.second;
        mx=max(mx, cur);
    }
    return mx;
}
