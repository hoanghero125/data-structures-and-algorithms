#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n;
	cin >> n;
	vector<int> v(n);
	for (int i=0;i<n;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	cout << (long long)v[n-1]*v[n-2];	
}

int main() {
	int t=1;
	// cin >> t;
	while (t--) {
		solve();
	}
}

