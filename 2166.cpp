#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
double polygon(vector<double> x, vector<double> y,int a){
    double ans = 0.0;
    for(int i=2;i<a;i++){
        ans += x[0] * y[i-1] + x[i-1] * y[i] + x[i] * y[0];
        ans -= x[i-1] * y[0] + x[i] * y[i-1] + x[0] * y[i] ;
    }
    return ans;
}
int main(){
    fast();
    int n;
    cin >> n;
    vector<double> x(n,0);
    vector<double> y(n,0);
    for(int i=0;i<n;i++){
        cin >> x[i];
        cin >> y[i];
    }
    double ans = polygon(x,y,n)/2;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << abs(ans) << '\n';
    return 0;
}
