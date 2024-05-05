#include <iostream>
#include <vector>
using namespace std;

int check(vector<vector<char>> &vec, int size) {
	int res = 0;
	for (int i = 0; i < size; i++) {	
		int sH = 0, sV = 0;
		char tcH = '\0', tcV = '\0';
		
		for (int j = 0; j < size; j++) {
			// h
			if (tcH == '\0') {
				tcH = vec[i][j];
			}
			if (tcH == vec[i][j]) {
				sH++;
			} else {
				tcH = vec[i][j];
				sH = 1;	
			}
			if (res < sH) res = sH;
			
			// v
			if (tcV == '\0') {
				tcV = vec[j][i];
			}
			if (tcV == vec[j][i]) {
				sV++;
			} else {
				tcV = vec[j][i];
				sV = 1;	
			}
			if (res < sV) res = sV;
		}
	}
	return res;
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<vector<char>> v;
	
	for (int y = 0; y < n; y++) {
		vector<char> tv;
		for (int x = 0; x < n; x++) {
			char c;
			cin >> c;
			tv.push_back(c);
		}
		v.push_back(tv);
	}
	
	int s = 0;
	vector<vector<char>> cvH, cvV;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			cvH = v;
			cvV = v;
			if (cvH[i][j] != cvH[i][j + 1]) {
				swap(cvH[i][j], cvH[i][j + 1]);
				int chk = check(cvH, n);
				if (s < chk) s = chk;
			}
			
			if (cvV[j][i] != cvV[j + 1][i]) {
				swap(cvV[j][i], cvV[j + 1][i]);
				int chk = check(cvV, n);
				if (s < chk) s = chk;
			}
		}
	}
	
	cout << s;
	return 0;
}