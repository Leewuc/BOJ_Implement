#include <iostream>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,k;
    cin >> n >> m >> k;
    int a = 0;
    int sum = 0;
    a = max(n,m);
    a = max(a,k);
    sum = n + m + k - a;
    if(a >= sum){
        a = sum - 1;
    }
    cout << sum + a;
    return 0;
}
