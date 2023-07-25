#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int m;
    int arr[10001];
    for(int i=0;i<n;i++){
        cin >> m;
        arr[m]++;
    }
    for(int i=1;i<=10000;i++){
        while(arr[i]){
            cout << i << '\n';
            arr[i]--;
        }
    }
    return 0;
}
