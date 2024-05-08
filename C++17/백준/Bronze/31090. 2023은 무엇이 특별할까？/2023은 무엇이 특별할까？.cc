#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << ((n + 1) % (n % 100) == 0 ? "Good" : "Bye") << '\n';
	}
	return 0;
}