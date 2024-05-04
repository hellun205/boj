#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string s;
    cin >> s;
    
    for(char c: s) {
    	cout << (char)(c - ('a' - 'A'));
	}
	return 0;
}