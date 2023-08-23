int Solution::trailingZeroes(int A) 
{
    int ans=0;
    for(int i=5; i<=A; i=i+5)
    {
        int x=i;
        while(x%5==0&&x>0)
        {
            ans++;
            x/=5;
        }
    }
    return ans;
}


/*

int Solution::trailingZeroes(int A) {
    int n = A;
    return n/5+n/25+n/125+n/625+n/3125+n/15625+n/78125+n/390625+n/1953125+n/9765625+n/48828125+n/244140625+n/1220703125;
}


*/