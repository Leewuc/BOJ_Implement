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
    string s;
    set<string> na;
    int cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s == "ENTER"){
            cnt += na.size();
            na.clear();
        }
        else{
            na.insert(s);
        }
    }
    cnt += na.size();
    cout << cnt;
    return 0;
}
