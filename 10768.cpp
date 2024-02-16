#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    if(n == 1 || (n==2 && m < 18)){
        cout << "Before" << '\n';
    }
    else if(n==2 && m == 18){
        cout << "Special" << '\n';
    }
    else{
        cout << "After" << '\n';
    }
    return 0;
}
