#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    cin >> n;
    int sum = 0;
    while( n>= 1){
        sum += n %2;
        n /= 2;
    }
    cout << sum;
  return 0;
}
