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
	int t=1;
	// cin >> t;
	while (t--) {
		solve();
	}
}