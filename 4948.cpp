#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool bert(int n){
    if(n == 1){
        return false;
    }
    for(int i=2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    fast();
    int n = 1;
    int cnt = 0;
    while(n!=0){
        cin >> n;
        if(n == 0){
            break;
        }
        for(int i = n+1;i<= 2*n; i++){
            if(bert(i)){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
