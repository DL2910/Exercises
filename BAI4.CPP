#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("BAI4.INP", "r", stdin);
    // freopen("BAI4.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long m, n, x1, y1, x2, y2, count {0};
    cin >> m >> n;
    cin >> x1 >> y1 >> x2 >> y2;
    long arr[m][n];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    }
    int i {x1}, j {y1};
    while ((i != x2) && (j != y2)){
        cout << abs(arr[i][j] - arr[i][j+1]) << " " <<abs(arr[i][j] - arr[i+1][j]) << "\n"; 
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