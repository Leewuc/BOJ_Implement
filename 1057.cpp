#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,k;
    cin >> n >> m >> k;
    int cnt = 0;
    while(m != k){
        m = (m+1)/2;
        k = (k+1)/2;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
