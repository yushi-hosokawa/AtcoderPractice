#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n,l;cin>>n>>l;
    vector<string> s(n);
    rep(i,n)cin>>s.at(i);
    string ans= "";
    sort(s.begin(),s.end());
    rep(i,n){
        ans+=s.at(i);
    }
    cout<<ans<<endl;

}
