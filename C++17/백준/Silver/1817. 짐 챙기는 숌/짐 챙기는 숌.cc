#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int n, m;
	vector<int> boxes;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		if (boxes.empty()) {
			boxes.push_back(b);
		} else {
			if (boxes.back() + b <= m) {
				boxes.back() += b;
			} else {
				boxes.push_back(b);
			}
		}
	}
	
	cout << boxes.size();
	return 0;
}