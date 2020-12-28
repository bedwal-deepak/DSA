//Write a Code to check whether one string is a rotation of another
#include <bits/stdc++.h>
using namespace std;
bool rotation(string s1, string s2)
{
	if (s1.length() != s2.length())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < s1.length(); i++)
		{
			rotate(s1.begin(), s1.begin() + 1, s1.end());
			if (!s1.compare(s2))
				return true;
		}
	}
	return false;
}
int main(int argc, char** argv)
{
	string s1 = "deepak";
	string s2 = "akdeep";
	if (rotation(s1, s2))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	return 0;
}