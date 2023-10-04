#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
    fast();
    int n,maxx;
    int max = 0;
    int scr = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> n;
            scr += n;
        }
        if(scr > max){
            max = scr;
            maxx = i;
        }
    }
    cout << maxx << ' ' << max;
    return 0;
}
