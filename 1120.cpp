#include <bits/stdc++.h>
using namespace std;
#define minn 987654321
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s1,s2;
    cin >> s2 >> s1;
    int a = 0;
    for(int i=0;i<s1.size();i++){
        if(i+s2.size() > s1.size()){
            continue;
        }
        for(int j=0;j<s2.size();j++){
            if(s2[j] != s1[i+j]){
                a++;
            }
        }
        minn = min(a,minn);
    }
    cout << minn;
    return 0;
}
