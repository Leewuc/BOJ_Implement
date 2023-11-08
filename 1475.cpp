#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n[10] = {0,};
    char rn[8];
    int cnt = 0;
    cin >> rn;
    for(int i=0;i<strlen(rn);i++){
        n[rn[i] - '0']++;
    }
        n[6] += n[9];
        n[6] = (n[6]+1) /2;
        n[9] = 0;
    for(int i=0;i<10;i++){
        if(cnt < n[i]){
            cnt = n[i];
        }
    }
    cout << cnt;
    return 0;
}
