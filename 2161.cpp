#include<iostream>
#include <queue>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    queue<int> q;
    cin >> n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size() > 1){
        cout << q.front() << ' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
    return 0;
}
