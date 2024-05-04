#include <iostream>
#include <string>
using namespace std;
int main() {
	string l = "WelcomeToSMUPC";
	int i;
	cin >> i;
	cout << (char)l[(i - 1)% l.size()];
	return 0;
}