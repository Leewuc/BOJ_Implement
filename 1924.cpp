#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int m,d;
    cin >> m >> d;
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    char *day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=1;i<m;i++){
        d += month[i];
    }
    cout << day[d%7] << '\n';
    return 0;
}
