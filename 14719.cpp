#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int H,W,n;
    int lef = 0;
    int rig = 0;
    int cnt = 0;
    vector<int> v;
    cin >> H >> W;
    while(W--){
        cin >> n;
        v.push_back(n);
    }
    for(int i=1;i<v.size()-1;i++){
        for(int j=i-1;j>=0;j++){
            lef = max(lef,v[j]);
        }
        for(int j=i+1;j<v.size();j--){
            rig = max(rig,v[j]);
        }
        int mi = min(lef,rig) - v[i];
        if(mi >=0){
            cnt += mi;
        }
    }
    cout << cnt << '\n';
    return 0;
}
