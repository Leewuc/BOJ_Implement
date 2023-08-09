#include <iostream>
#define mmax 1000001
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int cnt = 0;
    cin >> n;
    bool s[mmax];
    for(int i=0;i<mmax;i++){
        s[i] = true;
    }
    s[1] = false;
    for(int i=2;i<mmax;i++){
        for(int j=i*2;j<mmax;j=j+i){
            s[j] = false;
        }
    }
    while(n--){
        cin >> m;
        for(int i=2;i<m/2+1;i++){
            if(s[i] == true && s[m-i]){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
