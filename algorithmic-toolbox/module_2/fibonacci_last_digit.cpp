#include<bits/stdc++.h>

using namespace std;

int fibLastDigit(int n) {
	n%=60;
	vector<int> f(n+5);
	f[0] = 0;
	f[1] = 1;
	for (int i=2;i<=n;i++)
		f[i] = (f[i-1] + f[i-2])%10;
	return f[n];
}

void solve() {
	int n;
	cin >> n;
	cout << fibLastDigit(n);
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t=1;
	// cin >> t;
	while (t--) {
		solve();
	}
}