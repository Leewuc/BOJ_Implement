#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int gdc(int x,int y){
    if(y == 0){
        return x;
    }
    else{
        return gcd(y,x%y);
    }
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        int k;
        cin >> k; 
        int ks = k-m;
        if(ks <0){
            ks = -ks;
        }
        v[i] = ks;
    }
    int rst = v[0];
    for(int i=1;i<n;i++){
        rst = gcd(rst,v[i]);
    }
    cout << rst << '\n';
    return 0;
}
