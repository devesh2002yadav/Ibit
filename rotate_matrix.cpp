#include <vector>

void Solution::rotate(vector<vector<int> > &A) 
{
    //transpose
    for(int i=0; i<A.size(); i++)
    {
        for(int j=i+1; j<A[0].size(); j++)
        {
            swap(A[i][j], A[j][i]);
        }
    }
    for(int i=0; i<A.size(); i++)
    {
        reverse(A[i].begin(), A[i].end());
    }
}