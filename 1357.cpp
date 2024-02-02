#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int revplus(int n){
    int a = 0;
    while(n > 0){
        a *= 10;
        a += n%10;
        n /= 10;
    }
    return a;
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    cout << revplus(revplus(n)+revplus(m));
    return 0;
}
