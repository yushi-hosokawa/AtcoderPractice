#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    string s;cin>>s;
    string x;
    rep(i,s.size()){
        char y = s[i];
        if(y>='0'&& y<='9'){
            x+=y;
        }
    }

    int num = atoi(x.c_str());
    cout<<num<<endl;



}
