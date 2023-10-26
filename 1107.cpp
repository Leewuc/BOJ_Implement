#include <bits/stdc++.h>
using namespace std;
#define mmax 9999990
bool breakn[11];
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int channel(int n){
    int break_ch = 0;
    if(n == 0){
        if(breakn[0]){
            return 0;
        }
        else{
            return 1;
        }
    }
    while(n >0){
        if(breakn[n%10]){
            return 0;
        }
        break_ch += 1;
        n /= 10;
    }
    return break_ch;
}
int main(){
    fast();
    int n,m,k;
    cin >> n >> m;
    int cnt = n-100;
    for(int i=0;i<m;i++){
        cin >> k;
        breakn[k] = true;
    }
    if( cnt < 0){
        cnt = -cnt;
    }
    for(int i=0;i<=mmax;i++){
        if(channel(i) > 0){
            int button = i-n;
            if(button < 0){
                button = -button;
            }
            if(cnt > channel(i)+button){
                cnt = channel(i)+button;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
