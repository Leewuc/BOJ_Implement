#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
    fast();
    int a,b,c;
    cin >> a >> b >> c;
    int mul = a*b*c;
    int arr[10] = {0,};
    while(mul > 10){
        arr[mul%10]++;
        mul /= 10;
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
