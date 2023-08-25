int Solution::lengthOfLastWord(const string A) 
{
    int length = 0;
    int end = A.length() - 1;

    // Traverse the string from right to left
    while (end >= 0 && A[end] == ' ') {
        end--;
    }

    // Calculate the length of the last word
    while (end >= 0 && A[end] != ' ') {
        length++;
        end--;
    }

    return length;
}
