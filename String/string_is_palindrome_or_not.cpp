#include <bits/stdc++.h>
using namespace std;

// TC: O(n), SC: O(1)
bool isPalindrome(string str, int n)
{
    int start = 0;
    int end = n - 1;
    while (n > start)
    {
        if (str[start++] != str[end--])
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    string str = "deepakapeed";

    cout << isPalindrome(str, str.length()) << endl;
    return 0;
}