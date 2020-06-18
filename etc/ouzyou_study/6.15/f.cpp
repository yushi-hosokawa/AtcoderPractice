#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    ll a;cin>>a;
    bool flag = false;
    ll ans = 0;
    for(int i =10;i<10010 ;i++){
            ll tmp = 0;
            string str = to_string(i);
            int len = str.size();
            for(int j = 0;j<len;j++){
                //j+1桁目の出力
                ll x = pow(10,j);
                ll y = i/x;
                 y %= 10;
                tmp += y*pow(i,j);
            }

            if(tmp==a){
                ans = i;
                flag =true;
                break;
            }
        }
        if(flag){
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;


}
