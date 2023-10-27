#include <iostream>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int A,B;
    cin >> A >> B;
    vector<int> v;
    int cnt = 0;
    int ex = 1;
    int ans = 0;
    while(cnt < B){
        for(int i=0;i<ex;i++){
            v.push_back(ex);
            cnt++;
            if(cnt > B){
                break;
            }
        }
        ex++;
    }
    for(int i=A-1;i<B;i++){
        ans += v[i];
    }
    cout << ans;
    return 0;
}
