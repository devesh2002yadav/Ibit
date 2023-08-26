long Solution::countSalutes(string A) 
{
    long res = 0, now = 0;
    for(auto ch : A) {
        if(ch == '>') now++;
        else res += now;
    }
    return res;
}
