#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s;
    while(1){
        //cin >> s;
        getline(cin,s);
        if(s == "END"){
            break;
        }
        reverse(s.begin(),s.end());
        cout << s <<'\n';
    }
    return 0;
}
