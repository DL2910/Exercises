#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long m, n, x1, y1, x2, y2, count {0};
    cin >> m >> n;
    cin >> x1 >> y1 >> x2 >> y2;
    long arr[m+1][n+1] {999999};
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j)
            cin >> arr[i][j];
    }
    long i {x1}, j {y1};
    while (true){
        if ((i == x2) && (j == y2)) break;
        if (abs(arr[i][j] - arr[i][j+1])
            < abs(arr[i][j] - arr[i+1][j])){
                j++;
                count++;
            }
        else{
            i++;
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
