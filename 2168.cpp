#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int tile(int x,int y){
    if(x == y){
        return x;
    }
    if(!x){
        return y;
    }
    if(!y){
        return x;
    }
    if(x > y){
        return tile(x%y,y);
    }
    else{
        return tile(x,y%x);
    }
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    int k = tile(n,m);
    int a = tile(n,m)*(n/k + m/k - 1);
    cout << a;
    return 0;
}
