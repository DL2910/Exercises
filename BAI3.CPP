#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    int index {0}, count {0};
    cin >> n;
    long arr[n][3] {0};
    while (index < n){
        cin >> arr[index][0] >> arr[index][1] >> arr[index][2];
        index++;
    }
    for (int i = 0; i - 1 < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i][0] == arr[j][0]){
                if (arr[i][1] != arr[j][1]){
                    if (arr[i][2] == arr[j][2]) 
                        count++;
                }
            }
            else{
                if (arr[i][1] == arr[j][1]){
                    if (arr[i][2] == arr[j][2])
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}