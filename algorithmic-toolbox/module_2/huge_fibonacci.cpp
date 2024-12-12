#include<bits/stdc++.h>

using namespace std;

long long pisano(long long m) {
    long long f[2],res=0;
    f[0] = 0;
    f[1] = 1;
    for (int i=0;i<m*m;i++) {
        long long temp = f[1];
        f[1] = (f[0] + f[1])%m;
        f[0] = temp;
        if (f[0] == 0 && f[1] == 1) {
            res = i+1;
            break;
        }
    }
    return res;
}
 
long long fibModulo(long long n, long long m) {
    n%=pisano(m);
    long long f[2];
    f[0] = 0;
    f[1] = 1;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
 
    for (int i=0;i<n-1;i++) {
        long long temp = f[1];
        f[1] = (f[0] + f[1]) % m;
        f[0] = temp;
    }
    return f[1] % m;
}

void solve() {
    long long n,m;
    cin >> n >> m;
    cout << fibModulo(n,m);
}

int main() {
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}