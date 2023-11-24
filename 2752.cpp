#include<iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int arr[3] = {0};
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[j+1]<arr[j]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for(int i=0;i<3;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
