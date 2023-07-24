#include <bits/stdc++.h>
using namespace std;
void answer(int n){
    if(n==0){
        cout << "-";
        return;
    }
    answer(n-1);
    for(int i=0;i<pow(3,n-1);i++){
        cout << ' ';
    }
    answer(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n != EOF){
        answer(n);
        cout << '\n';
    }
    return 0;
}
