int Solution::isPower(int A) {
    if(A==1) return 1;
    vector<int> factors;
    while (A % 2 == 0)
    {
        factors.push_back(2);
        A = A/2;
    }
    for (int i = 3; i <= sqrt(A); i = i + 2)
    {
        while (A % i == 0)
        {
            factors.push_back(i);
            A = A/i;
        }
    }
    if (A > 2) factors.push_back(A);
    vector<int> powers;
    int ct=1;
    for(int i=1; i<factors.size(); i++){
        if(factors[i]==factors[i-1]) ct++;
        else{
            powers.push_back(ct);
            ct=1;
        }
    }
    powers.push_back(ct);
    int curr=powers[0];
    for(int i=1; i<powers.size(); i++){
        curr=__gcd(curr,powers[i]);
    }
    if(curr==1) return 0;
    return 1;
}

