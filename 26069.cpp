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
    cin >> n;
    set <string> s{"ChongChong"};
    string c,h;
    while(n--){
        cin >> c >> h;
        if(s.find(c) != s.end() || s.find(h) != s.end()){
            s.insert(h);
            s.insert(c);
        }
    }
    cout << s.size();
    return 0;
}
