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
    int n1,m1,k1;
    cin >> n >> m >> k;
    for(int i=1;; i++){
        n+= 1;
        m += 1;
        k += 1;
        if(n == 16){
            n = 1;
        }
        if(m == 29){
            m = 1;
        }
        if(k == 20){
            k = 1;
        }
        if(n == n1 && m == m1 && k == k1){
            cout << i << '\n';
        }
    }
    return 0;
}
