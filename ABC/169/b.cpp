#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;



int main(){
    int n; cin>>n;
    vector<ll> a(n);
    ll max = pow(10,18);
    ll ans =0;

    rep(i,n){
        cin >>a[i];
        if(a[i]==0){
            cout<<ans<<endl;
            return 0;
        }

    }
    ans = 1;
    for(int i = 0;i<n;++i){
        //10^18を超える→10^18を答えで割った値より新しい値が大きいときに出てくる
        if(a[i]<=max/ans){
            ans *= a[i];
        }
        else {
            ans = -1;
            break;
        }
    }
    cout<<ans<<endl;
}
