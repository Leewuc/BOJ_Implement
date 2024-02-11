#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    vector <int>v1(10);
    vector <int>v2(10);
    int n,m;
    for(int i=0;i<10;i++){
        cin >> v1[i];
    }
    for(int i=0;i<10;i++){
        cin >> v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=7;i<10;i++){
        n += v1[i];
    }
    for(int i=7;i<10;i++){
        m += v2[i];
    }
    cout << n << ' '<<m;
    return 0;
}
