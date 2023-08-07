#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    return gcd(y,x%y);
}
int main(){
    fast();
    long long int n,m;
    cin >> n >> m;
    cout << (n*m) /gcd(n,m);
    return 0;
}
