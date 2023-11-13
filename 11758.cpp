#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
int main(){
    fast();
    int point[3][2];
    int cnt = 0;
    int ans = 0;
    for(int i=0;i<3;i++){
        cin >> point[i][0] >> point[i][1];
    }
    for(int j=0;j<3;j++){
         cnt += point[j][0] * point[(j+1)%3][1];
        cnt += point[j][1] * point[(j+1)%3][0];
    }
    if(cnt - ans >0){
        cout << "1";
    }
    else if(cnt - ans < 0){
        cout << "-1";
    }
    else{
        cout << "0";
    }
    return 0;
}
