#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point {
	int x, y;
};

bool compare(point a, point b) {
	return a.x == b.x ? a.y < b.y : a.x < b.x;
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int c;
	cin >> c;
	vector<point> v;
	
	for (int i = 0; i < c; i++) {
		point p;
		cin >> p.x >> p.y;
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].x << ' ' << v[i].y << '\n';
	}
	return 0;
}