#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int n;
		vector<int> v;
		cin >> n;
		
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		
		cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end()) << '\n';
	}
	return 0;
}