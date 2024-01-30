#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int arr[10];
    int cnt = 0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i=10;i++){
        if(abs(cnt+arr[i]-100) <= abs(cnt - 100)){
            cnt += arr[i];
        }
        else{
            break;
        }
    }
    cout << cnt << '\n';
    return 0;
}
