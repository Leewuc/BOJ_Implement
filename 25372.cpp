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
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s.size() < 6 || s.size() > 9){
            cout << "no" << '\n';
        }
        else{
            cout << "yes" << '\n';
        }
    }
    return 0;
}
