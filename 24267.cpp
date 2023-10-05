#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    long long n;
    cin >> n;
    cout << n*(n-1)*(n-2)/6 << '\n' << 3;
    return 0;
}
