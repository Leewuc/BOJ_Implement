#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
class clasify{
    public:
        int w,h,r;
};
int main(){
    fast();
    int n;
    clasify* c = new clasify[51];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> c[i].w >> c[i].h;
    }
    for(int i=0;i<n;i++){
        
        c[i].r = 1;
        for(int j=0;j<n;j++){
            if(c[i].w < c[j].w && c[i].h < c[j].h){
                c[i].r++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << c[i].r<<' ';
    }
    return 0;
}
