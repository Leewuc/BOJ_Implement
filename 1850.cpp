#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
long long gcd(long long a,long long b){
    return b ? gcd(b,a%b) : a;
}
int main(){
    fast();
    long long n,m;
    cin >> n >> m;
    long long cnt = gcd(n,m);
    for(int i=0;i<cnt;i++){
        cout << 1;
    }
    return 0;
}
