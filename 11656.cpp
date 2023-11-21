#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s;
    vector<string> v;
    cin >> s;
    for(int i=0;i<s.length();i++){
        v.push_back(s.substr(i));
    }
    sort(v.begin(),v.end());
    for(auto i : v){
        cout << i << '\n';
    }
    return 0;
}
