#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    int cnt = 0;
    int a_100,a_10,a_1;
    cin >> n;
    if(n < 100){
        cout << n << '\n';
    }
    else{
        for(int i=100;i<=n;i++){
            a_100 = i/100;
            a_10 = (i/10) - ((i/100)*10);
            a_1 = i%10;
            if((a_1 - a_10) == (a_10 - a_100)){
                cnt++;
            }
        }
        cout << cnt + 99 << '\n';
    }
    return 0;
}
