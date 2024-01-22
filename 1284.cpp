#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int adr(int n){
    int rst = 2;
    while(n){
        int tmp = n%10;
        switch(tmp){
            case 1:
                 rst += 2;
                 break;
            case 0:
                rst += 4;
                break;
            default:
                rst += 3;
        }
        n /= 10;
        if(n){
            rst++;
        }
    }
    return rst;
}
int main(){
    fast();
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        cout << adr(n) << '\n';
    }
    return 0;
}
