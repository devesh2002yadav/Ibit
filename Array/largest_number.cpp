#include <algorithm>
#include <string>

bool customSort(const int a, const int b)
{
    std::string ab_concat = std::to_string(a) + std::to_string(b);
    std::string ba_concat = std::to_string(b) + std::to_string(a);
    return ab_concat > ba_concat;
}

string Solution::largestNumber(const vector<int> &A) 
{
    std::vector<int> B = A; // Make a copy of the input vector
    sort(B.begin(), B.end(), customSort);
    
    if (B[0] == 0)
    {
        return "0";
    }
    
    std::string ans;
    for (auto x : B)
    {
        ans += std::to_string(x);
    }
    return ans;
}
