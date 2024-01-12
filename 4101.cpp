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
    int n,m;
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        if(n<=m){
            cout << "No" << '\n';
        }
        else{
            cout << "Yes" << '\n';
        }
    }
    return 0;
}
