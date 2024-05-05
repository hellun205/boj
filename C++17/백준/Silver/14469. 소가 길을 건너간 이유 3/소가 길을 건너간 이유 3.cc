#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cow {
	int at, tt;
};

bool compare(cow a, cow b) {
	return a.at < b.at;
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int c;
	cin >> c;
	
	vector<cow> v;
	
	for (int i = 0; i < c; i++) {
		cow x;
		cin >> x.at >> x.tt;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end(), compare);
	int total = 0;
	
	for (int i = 0; i < v.size(); i++) {
		if (total < v[i].at) {
			total = v[i].at;
		}
		
		total += v[i].tt;
	}
	
	cout << total;
	
	return 0;
}