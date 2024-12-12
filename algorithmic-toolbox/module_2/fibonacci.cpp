#include<bits/stdc++.h>

using namespace std;

long long fib(int n) {
	vector<long long> f(n+5);
	f[0] = 0;
	f[1] = 1;
	for (int i=2;i<=n;i++)
		f[i] = f[i-1] + f[i-2];
	return f[n];
}

void solve() {
	int n;
	cin >> n;
	cout << fib(n);
}

int main() {
	int t=1;
	// cin >> t;
	while (t--) {
		solve();
	}
}