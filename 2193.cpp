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
    cin >> n;
    long long pin[91] = {0,1,1,};
    for(int i=3;i<=n;i++){
        pin[i] = pin[i-1] + pin[i-2];
    }
    cout << pin[n];
    return 0;
}
