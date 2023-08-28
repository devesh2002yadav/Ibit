int Solution::strStr(const string A, const string B) 
{
    int haystackLen = A.length();
    int needleLen = B.length();

    if (needleLen == 0)
        return -1;

    for (int i = 0; i <= haystackLen - needleLen; ++i) {
        bool found = true;
        for (int j = 0; j < needleLen; ++j) {
            if (A[i + j] != B[j]) {
                found = false;
                break;
            }
        }
        if (found)
            return i;
    }
    return -1;
}
