#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    list<int> l;
    int cnt;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cnt;
        auto k = l.end();
        while(cnt > 0){
            cnt--;
            k--;
        }
        l.insert(k,i+1);
    }
    for(int i:l){
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}
