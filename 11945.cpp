#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    string s;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s;
        reverse(s.begin(),s.end());
        cout << s << '\n';
    }
    return 0;
}
