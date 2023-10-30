#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll line(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    ll x = x1*y2+x2*y3+x3*y1;
    ll y = y1*x2+y2*x3+y3*x1;
    if(x-y < 0){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    fast();
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3>> y3>> x4 >> y4;
    ll xyz = line(x1,y1,x2,y2,x3,y3);
    ll xzy = line(x1,y1,x2,y2,x4,y4);
    ll yxz = line(x3,y3,x4,y4,x1,y1);
    ll yzx = line(x3,y3,x4,y4,x2,y2);
    if(xyz*xzy <= 0 && yxz*yzx <=0){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    return 0;
}
