#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        cout << s[i];
        if((i+1)%10 == 0){
            cout << '\n';
        }
    }
    return 0;
}
