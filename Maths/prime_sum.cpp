int check_prime(int n){
    if(n==2) return 1;
 
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

vector<int> Solution::primesum(int A) 
{
    int x=2;
    int y=A-2;
    while(x<=A/2&&y>=A/2)
    {
        int a=check_prime(x);
        int b=check_prime(y);
        if(a==1&&b==1)
        {
            return {x, y};
        }
        x++; y--;
    }
}
