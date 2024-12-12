#include<bits/stdc++.h>

using namespace std;

long long gcd(int a, int b) {
	if (b == 0) 
		return a;
	return gcd(b,a%b);
}

void solve() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);
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