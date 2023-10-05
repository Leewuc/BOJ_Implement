#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int sta[100001];
    int n;
    int rst = 0;
    int nxt = 1;
    stack<int> s;
    bool tf = true;
    cin >> n;
    string cnt = "";
    for(int i=0;i<n;i++){
        cin >> sta[i];
    }
    while(tf){
        if(s.empty()){
            if(sta[rst] < nxt){
                cout << "NO";
                return 0;
            }
            s.push(nxt);
            cnt += "+";
            nxt++;
        }
        else if(sta[rst] > s.top()){
            if(sta[rst] < nxt){
                cout << "NO";
                return 0;
            }
            s.push(nxt);
            cnt += "+";
            nxt++;
        }
        else if(sta[rst] <s.top()){
            s.pop();
            cnt += "-";
        }
        else if(sta[rst] == s.top()){
            cnt += "-";
            s.pop();
            rst++;
            if(rst == n){
                tf = false;
            }
        }
    }
    for(int i=0;i<cnt.length();i++){
        cout << cnt[i] << '\n';
    }
    return 0;
}
