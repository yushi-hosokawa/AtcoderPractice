#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n =5;
    vector <int> a(n);
    int ans = 0;
    rep(i,n)cin>>a[i];
    rep(i,n){
        if(a[i]==0){
            ans = i;
            break;
        }
    }
    ans +=1;
    cout<<ans<<endl;
}
