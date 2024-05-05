#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

bool compare(string s1, string s2) {
	return s1.size() == s2.size() ? s1 < s2 : s1.size() < s2.size();
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int c;
	cin >> c;
	
	for(int i = 0; i < c; i++) {
		string s;
		cin >> s;
		
		if (find(v.begin(), v.end(), s) == v.end()) {
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}