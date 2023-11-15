#include <iostream>
#include <vector>
using namespace std;
int n,m;
bool visited[9];
void fast(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
void stick(int a,int b){
    if(b == m){
        for(int i=1;i<=n;i++){
            if(visited[i] == true){
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
    for(int i=a;i<=n;i++){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        stick(i,b+1);
        visited[i] = false;
    }
}
int main(){
    fast();
    cin >> n >> m;
    stick(1,0);
    return 0;
}
