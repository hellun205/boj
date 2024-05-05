#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	stack<int> s;
	int c;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		string cmd;
		cin >> cmd;
		
		if (cmd == "push") {
			int x;
			cin >> x;
			s.push(x);
		} else if (cmd == "pop") {
			if (s.size() > 0) {
				cout << s.top() << '\n';
				s.pop();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "size") {
			cout << s.size() << '\n';
		} else if (cmd == "empty") {
			cout << (s.size() > 0 ? 0 : 1) << '\n';
		} else if (cmd == "top") {
			cout << (s.size() > 0 ? s.top() : -1) << '\n';
		}
	}
	
	return 0;
}