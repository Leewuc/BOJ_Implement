#include <iostream>
#include <vector>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    vector<int> v;
    int ans = 0;
    for(int i=1;i<n+1;i++){
        if(n%i == 0){
            v.push_back(i);
            ans++;
        }
    }
    if(ans < m){
        cout << '0';
    }
    else{
        cout << v[m-1];
    }
    return 0;
}
