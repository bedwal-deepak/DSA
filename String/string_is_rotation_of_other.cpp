#include <bits/stdc++.h>
using namespace std;

bool isRotationOfOther(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2)
        return false;

    string s = s1 + s2;

    return (s.find(s2) != string::npos);
}

bool isRotationOfOther1(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2)
        return false;

    queue<char> q1;
    for (int i = 0; i < len1; i++)
    {
        q1.push(s1[i]);
    }

    queue<char> q2;
    for (int i = 0; i < len2; i++)
    {
        q1.push(s2[i]);
    }

    while (len2--)
    {
        char c = q2.front();
        q2.pop();
        q2.push(c);
        if (q2 == q1)
            return true;
    }
    return false;
}

int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";

    cout << isRotationOfOther1(s1, s2);
    return 0;
}