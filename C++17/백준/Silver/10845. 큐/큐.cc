#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	queue<int> q;
	int c;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		string cmd;
		cin >> cmd;
		
		if (cmd == "push") {
			int x;
			cin >> x;
			q.push(x);
		} else if (cmd == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "size") {
			cout << q.size() << '\n';
		} else if (cmd == "empty") {
			cout << (q.empty() ? 1 : 0) << '\n';
		} else if (cmd == "front") {
			cout << (q.empty() ? -1 : q.front()) << '\n';
		} else if (cmd == "back") {
			cout << (q.empty() ? -1 : q.back()) << '\n';
		}
	}
	
	return 0;
}