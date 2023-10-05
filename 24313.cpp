#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int a1,a0,n0,c;
    cin >> a1 >> a0 >> c >> n0;
    if(c < a1){
        cout << 0;
    }
    else if((c-a1)*n0 < a0){
        cout << 0;
    }
    else{
        cout << 1;
    }
  return 0;
}
