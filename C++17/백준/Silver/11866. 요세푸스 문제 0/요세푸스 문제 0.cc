#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, k, a = 0;
	vector<int> v;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	
	cout << '<';
	while(!v.empty()) {
		a = (a += k - 1) >= v.size() - 1 ? a % v.size() : a;
		cout << v[a];
		v.erase(v.begin() + a);
		cout << (v.empty() ? ">" : ", ");
	}
	
	return 0;
}