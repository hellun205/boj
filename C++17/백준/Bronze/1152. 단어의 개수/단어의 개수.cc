#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int n = 1;
	getline(cin, s);
	
	if (s == "" || s == " ")
	{
		cout << 0;
		return 0;
	}
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ' && i != 0 && i != s.size() - 1) n++;
	}
	
	cout << n;
	return 0;
}