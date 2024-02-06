#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int gcd(int n,int m){
    if(m == 0){
        return n;
    }
    else{
        return gcd(m,n%m);
    }
}
int main(){
    fast();
    int n,m,k;
    string s;
    cin >> s;
    int len = s.length();
    int a = s.find(':');
    n = stoi(s.substr(0,a));
    m = stoi(s.substr(a+1,len-a));
    if(n>m){
        k = gcd(n,m);
    }
    else{
        k = gcd(m,n);
    }
    cout << n/k << ":" << m/k;
    return 0;
}
