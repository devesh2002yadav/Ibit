int Solution::repeatedNumber(const vector<int> &A) 
{
    int low=1;
    int high=A.size()-1;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        int count=0;
        for (int num : A) 
        {
            if (num <= mid) 
            {
                count++;
            }
        }
        if (count > mid) 
        {
            high = mid;
        } 
        else 
        {
            low = mid + 1;
        }
    }
    
    return low;
}

/* 

int Solution::repeatedNumber(const vector<int> &A) 
{
    int freq[A.size()+1]={0};
    for(int i=0; i<A.size(); i++)
    {
        freq[A[i]]++;
        if(freq[A[i]]>1)
        {
            return A[i];
        }
    }
    return -1;
}A

*/