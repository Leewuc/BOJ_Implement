1 #include <iostream>
2 using namespace std;
3 int main(){
cin. tie (NULL);
cout.tie (NULL);
string s;
int n,m;
int cnt =0;
cin >> s >> n;
int len = s. length ();
int tmp=1;
for(int i=len-1;i>=0; i--){
if(s[il >= '0' && s[il <= '9') {
m = s [i] -'O';
}
else {
m = s[i]- 'A' + 10;
}
m *= tmp;
cnt += m;
tmp *= n;
}
cout << cnt << "\n';
return 0;
}
