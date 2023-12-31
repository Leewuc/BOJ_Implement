#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    int cnt = 0;
    int rst = 0;
    cin >> n;
    cnt = n/5;
    rst = n%5;
    while(cnt > 0 && rst %2 != 0){
        cnt --;
        rst += 5;
    }
    if(rst %2==0){
        cout << cnt + rst/2 << '\n';
    }
    else{
        cout << -1 << '\n';
    }
    return 0; 
}
