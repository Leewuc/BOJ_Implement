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
    int sum = 0;
    int candy[1001];
    for(int i=0;i<n;i++){
        cin >> candy[i];
        sum += candy[i];
    }
    sum /= 2;
    for(int i=1;i<n-1;){
        sum -= candy[i];
        i +=2;
    }
    cout << sum << '\n';
    for(int i=0;i<n-1;i++){
        sum = candy[i] - sum;
        cout << sum << '\n';
    }
    return 0;
}
