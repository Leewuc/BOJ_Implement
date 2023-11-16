#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int a,b,m;
    cin >> a >> b >> m;
    long long tmp = 0;
    stack<int> s;
    for(int i=m-1;i>=0;i--){
        int aa;
        cin >> aa;
        tmp += aa * pow(a,i);
    }
    if(tmp ==0){
        cout << 0 << '\n';
        return 0;
    }
    for(int i=1;1<=tmp;i++){
        s.push(tmp%b);
        tmp = tmp/b;
    }
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    cout << '\n';
    return 0;
}
