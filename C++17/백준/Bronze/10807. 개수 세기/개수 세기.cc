#include <iostream>
#include <numeric>

using namespace std;

int l[100];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, v, sum = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	
	cin >> v;
	
	for (int i = 0; i < n; i++) {
		if (l[i] == v)
			sum++;
	}
	
	cout << sum;
	
	return 0;
}