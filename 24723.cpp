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
    int cnt = 1;
    cin >> n;
    while(n--){
        cnt *= 2;
    }
    cout << cnt << '\n';
    return 0;
}
