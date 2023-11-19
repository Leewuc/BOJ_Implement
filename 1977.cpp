#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int min = 987654321;
    cin >> n >> m;
    int prime = 1;
    int cnt = 0;
    int sum = 0;
    while(1){
        cnt = prime * prime;
        if(cnt >= m && cnt <= n){
            sum += cnt;
            if(cnt < min){
                min = cnt;
            }
        }
        else if(cnt > n){
            break;
        }
        prime++;
    }
    if(sum <= 0){
        cout << -1;
    }
    else{
        cout << sum << '\n' << min;
    }
    return 0;
}
