#include<iostream>
#include<cstring>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    char s[101];
    while(!cin.eof()){
        //cin >> s;
        cin.getline(s,101);
        cout << s << '\n';
    }
    return 0;
}
