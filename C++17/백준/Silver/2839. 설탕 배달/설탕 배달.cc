#include <iostream>
#include <algorithm>

using namespace std;
	
int n, t;

int calc(int kilogram, int other) {
	for (int i = 0; i <= n / kilogram; i++) {
		t = n;
		t -= kilogram * i;
		if (t % other == 0) {
			return i + (int)(t / other);
		}
	}
	return -1;
}

int main(void) {
	cin >> n;
	cout << calc(3, 5);
	return 0;
}