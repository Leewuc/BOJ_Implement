#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n,m;
    stack<char> st;
    int cnt;
    cin >> n >> m;
    while(n!=0){
        cnt = n % m;
        if (cnt >= 10)
		{
            cnt+= 7;
		}
		st.push('0' + cnt);
            n /= m;
	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
  }
}
