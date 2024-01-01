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
    vector <int>v;
    int cnt[8002];
    int rst = 0;
    int mmax = 0;
    for(int i=0;i<n;i++){
        cin >> m;
        rst += m;
        v.push_back(m);
        cnt[m+4000]++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<8002;i++){
        if(cnt[i]>mmax){
            mmax = cnt[i];
            k = i;
        }
    }
    for(int i=k+1;i<8001;i++){
        if(cnt[i]==mmax){
            k = i;
            break;
        }
    }
    cout << round(rst / (1.0*n)) << '\n';
    cout << v[(n-1)/2] << '\n';
    cout << k-4000 << '\n';
    cout << v[n-1] - v[0];
    return 0;
}
