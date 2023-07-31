#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int map[51][51];
    cin >> n >> m;
    int length;
    length = min(n,m);
    string s;
    int res = 0;
    int sav = 0;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++){
            map[i][j] = s[j] - '0';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<length;k++){
                if(j+k < m&&i+k<n){
                    if(map[i][j]==map[i+k][j]&&map[i][j] == map[i][j+k]&&map[i][j]==map[i+k][j+k]){
                        sav = k;
                    }
                }
            }
            if(sav > res){
                res = sav;
            }
        }
    }
    cout << (res+1)*(res+1);
    return 0;
}
