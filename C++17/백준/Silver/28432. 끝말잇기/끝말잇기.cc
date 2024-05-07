#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int n, m;
	vector<string> s, a;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string w;
		cin >> w;
		s.push_back(w);
	}
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		string w;
		cin >> w;
		if (find(s.begin(), s.end(), w) == s.end())
			a.push_back(w);
	}
	
	if (n == 1) {
		cout << a[0];
		return 0;	
	}
	
	int qi = find(s.begin(), s.end(), "?") - s.begin();
	char end, start;
	if (qi == 0) {
		start = s[qi + 1].front();
		
		for(int i = 0; i < a.size(); i++) {
			if (a[i].back() == start)
				cout << a[i];
		}
	} else if (qi == s.size() - 1) {
		end = s[qi - 1].back();
		
		for(int i = 0; i < a.size(); i++) {
			if (a[i].front() == end)
				cout << a[i];
		}
	} else {
		end = s[qi - 1].back();
		start = s[qi + 1].front();
	
		for(int i = 0; i < a.size(); i++) {
			if (a[i].front() == end && a[i].back() == start)
				cout << a[i];
				
		}
	}

	return 0;
}