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
    string s1,s2,n,m;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++){
        n = n +s1[i]+s2[i];
    }
    while(n.size() != 2){
        for(int i=0;i<n.size()-1;i++){
            m = m+char('0'+((n[i]-'0')+(n[i+1]-'0'))%10);
        }
        n=m;
    }
    cout << n;
    return 0;
}
