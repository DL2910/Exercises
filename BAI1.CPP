#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long a, b, c, x;
    cin >> a >> b >> c;
    int count {0};
    for (long i = 0; i <= c; ++i){
        if (((c-b*i) % a == 0) && ((c-b*i) / a >  0)){
            x = (c-b*i) / a;
            if (__gcd(x, i) == 1) count++;
        }
    }
    cout << count;
    return 0;
}