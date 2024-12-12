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

int fibLastDigitSquaresSum(long long n) {
    long long sum = 0;
    vector<int> period = pisanoPeriod();
    vector<int> fSquares(60);
    fSquares[0] = 0;
    fSquares[1] = 1;
    for (int i=0;i<60;i++) {
		fSquares[i] = (period[i]*period[i])%10;
		sum+=fSquares[i];
    }
    sum*=n/60;
    for (int i=0;i<=n%60;i++)
        sum+=fSquares[i];
    return sum%10;
}

void solve() {
    long long n;
    cin >> n;
    cout << fibLastDigitSquaresSum(n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}

cp