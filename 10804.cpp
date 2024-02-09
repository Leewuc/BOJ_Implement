#include <iostream>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int arr[21];
    for(int i=1;i<21;i++){
        arr[i] = i;
    }
    for(int i=0;i<10;i++){
        cin >> n >> m;
        reverse(arr+n,arr+m+1);
    }
    for(int i=1;i<21;i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}
