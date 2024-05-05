#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	deque<int> dq;
	int c;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		string cmd;
		cin >> cmd;
		
		if (cmd == "push_front") {
			int x;
			cin >> x;
			dq.push_front(x);
		} else if (cmd == "push_back") {
			int x;
			cin >> x;
			dq.push_back(x); 
		} else if (cmd == "pop_front") {
			if (dq.empty()){
				cout << -1 << '\n';
			} else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		} else if (cmd == "pop_back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			} else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		} else if (cmd == "size") {
			cout << dq.size() << '\n';
		} else if (cmd == "empty") {
			cout << (dq.empty() ? 1 : 0) << '\n';
		} else if (cmd == "front") {
			cout << (dq.empty() ? -1 : dq.front()) << '\n';
		} else if (cmd == "back") {
			cout << (dq.empty() ? -1 : dq.back()) << '\n';
		}
	}
	return 0;
}