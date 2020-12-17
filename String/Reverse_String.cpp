//Reverse a string
#include <bits/stdc++.h>
using namespace std;
void reverseString(string &str)
{
	//reverse(str.begin(), str.end());
	for (int i = 0; i < str.length() / 2; ++i)
	{
		swap(str[i], str[str.length() - 1 - i]);
	}
}
int main(int argc, char**)
{
	string str = "Deepak_kumar";
	reverseString(str);
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	return 0;
}