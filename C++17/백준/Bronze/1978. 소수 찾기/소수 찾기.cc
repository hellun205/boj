#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int c;
	int s = 0;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		int n;
		cin >> n;
		if (isPrime(n)) {
			s++;
		}
	}
	
	cout << s;
}