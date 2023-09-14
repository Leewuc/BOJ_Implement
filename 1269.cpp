#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,k;
    cin >> n >> m;
    set<int> s;
    for(int i=0;i<n+m;i++){
        cin >> k;
        s.insert(k);
    }
    int carray = s.size() - (n+m-s.size());
    cout << carray;
    return 0;
}
