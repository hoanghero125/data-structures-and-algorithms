#include<bits/stdc++.h>

using namespace std;

vector<int> pisanoPeriod() {
    vector<int> period(60);
    period[0] = 0;
    period[1] = 1;
    for (int i=2;i<60;i++)
        period[i] = (period[i-1] + period[i-2])%10;
    return period;
}

int fibLastDigitSum(long long n) {
    long long sum = 0;
    vector<int> period = pisanoPeriod();
    n%=60;
    for (long long i=0;i<=n;i++)
        sum += period[i];
    return sum%10;  
}

void solve() {
	long long n;
	cin >> n;
	cout << fibLastDigitSum(n);
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