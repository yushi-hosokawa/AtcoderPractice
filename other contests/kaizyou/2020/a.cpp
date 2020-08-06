#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    string s ;cin>>s;
    string ans = "";
    rep(i,3){
        char x = s[i];
        ans+=x;
    }
    cout<<ans<<endl;

}
