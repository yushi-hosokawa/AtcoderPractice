#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    string s;cin>>s;
    vector<char> x(s.size()+1);
    int n = s.size();

    rep(i,n){
        x[i+1]=s[i];
    }
    ll count = 0;

    for(int i = 1;i<=n;i++){
        if(x[i]=='U'){
            count+=n-i;
            count+= 2*(i-1);
        }
        else {
            count+=2*(n-i);
            count+= i-1;
        }
    }
    cout<<count<<endl;
}
