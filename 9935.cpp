#include <iostream>
#include <string>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s,s1,s2;
    bool chk;
    cin >> s >> s1;
    s2 = "";
    for(int i=0;i<s.size();i++){
        s2.push_back(s[i]);
        if(s2.back() == s1.back()){
            chk = true;
            for(int j=1;i<= s1.size();j++){
                if(s2[s2.size() - j]!= s1[s1.size()-j]){
                    chk = false;
                }
            }
            if(chk){
                for(int i=0;i<s1.size();i++){
                    s2.pop_back();
                }
            }
        }
    }
    if(s2.empty()){
        cout << "FRULA" << '\n';
    }
    else{
        cout << s2 << '\n';
    }
    return 0;
}
