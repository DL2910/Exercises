#include <bits/stdc++.h>
using namespace std;

long m, n; 

#define MAX 50000
#define foi(i, a, b) for (long i = a; i < b; ++i)
#define foi_(i, a, b) for (long i = a; i > b; --i)

void read_Arr(int a[], int end){
    foi(i, 0, end){
        cin >> a[i];
    }
}

int main(){
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n] {0};
    read_Arr(a, n);
    cin >> m;
    int b[MAX] {0};
    while (m--){
        long i;
        cin >> i;
        if (b[i]){
            int tmp;
            cin >> tmp;
            if (b[i] > tmp) b[i] = tmp;
        } 
        else cin >> b[i];
    }
    foi_(i, MAX, 0){
        if (b[i-1]){
            if ((b[i-1] > b[i]) && (b[i]))
                b[i-1] = b[i];
        }
        else b[i-1] = b[i];
    }
    long sum {0};
    foi(i, 0, n){ 
        sum += b[a[i]];
    }
    cout << sum << "\n";
    return 0;
}