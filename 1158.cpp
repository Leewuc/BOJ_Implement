#include <iostream>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    vector<int> v;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int k = m-1;
    cout << "<";
    while(v.size()){
        if(v.size() == n){
            cout << v[k];
            v.erase(v.begin() + k);
            continue;
        }
        k += m-1;
        while(v.size() <= k){
            k -= v.size();
        }
        cout << ", " << v[k];
        v.erase(v.begin() + (k));
    }
    cout << ">" << '\n';
    return 0;
 }
