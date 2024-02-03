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
    int k = 0;
    cin >> n;
    for(int i=0;i<5;i++){
        cin >> m;
        if(m == n){
            k++;
        }
    }
    cout << k;
    return 0;
}
