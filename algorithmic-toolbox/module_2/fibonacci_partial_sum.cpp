#include<bits/stdc++.h>

using namespace std;

vector<int> pisanoPeriod() {
    vector<int> period(60);
    period[0] = 0;
    period[1] = 1;
    for (int i = 2; i < 60; i++)
        period[i] = (period[i-1] + period[i-2])%10;
    return period;
}

int fibLastDigitPartialSum(long long m, long long n) {
    long long sum = 0;
    vector<int> period = pisanoPeriod();
    m%=60;
    n%=60;
    if (m<=n) {
        for (long long i=m;i<=n;i++)
            sum+=period[i];
    } else {
        for (long long i=m;i<60;i++)
            sum+=period[i];
        for (long long i=0;i<=n;i++)
            sum+=period[i];
    }
    return sum%10;
}

void solve() {
    long long m, n;
    cin >> m >> n;
    cout << fibLastDigitPartialSum(m, n);
}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
}
