#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	
	vector<int> v;
	int a = 0;
	
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	
	cout << '<';
	
	while(!v.empty()) {
		for (int i = 0; i < k - 1; i++) {
			if (a == v.size())
				a = 0;
			a = a < v.size() - 1 ? a + 1 : 0;
		}
		
		cout << v[a];
		v.erase(v.begin() + a);
		
		cout << (v.empty() ? ">" : ", ");
	}
	
	return 0;
}