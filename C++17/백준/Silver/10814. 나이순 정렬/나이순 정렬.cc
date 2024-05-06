#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct member {
	int age;
	string name;
};

bool compare(member a, member b) {
	return a.age < b.age;
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	vector<member> v;
	
	int c;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		member m;
		cin >> m.age >> m.name;
		v.push_back(m);
	}
	
	stable_sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < c; i++) {
		cout << v[i].age << ' ' << v[i].name << '\n';
	}
	
	return 0;
}