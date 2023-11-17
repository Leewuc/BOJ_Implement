#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int arr[3];
    while(1){
        for(int i=0;i<3;i++){
            cin >> arr[i];
        }
        sort(arr,arr+3);
        int a = arr[0] * arr[0];
        int b = arr[1] * arr[1];
        int c = arr[2] * arr[2];
        
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        if(a+b == c){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }
    }
    return 0;
}
