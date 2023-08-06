#include <bits/stdc++.h>
using namespace std;
int output[3];
int arr[3000][3000];
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void paper(int x, int y, int n){
    int a = arr[x][y];
    bool f = true;
    for(int i=x;i<x+n;i++){
        for(int j= y; j< y+n;j++){
            if(arr[i][j] != a){
                f = false;
                break;
            }
        }
    }
    if(f){
        output[a+1]++;
    }
    else{
        for(int i=x;i<x+n;i+=n/3){
            for(int j=y;j<y+n;j+= n/3){
                paper(x,y,n/3);
            }
        }
    }
}
int main(){
    fast();
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    paper(0,0,n);
    for(int i=0;i<3;i++){
        cout << output[i] << '\n';
    }
    return 0;
}
