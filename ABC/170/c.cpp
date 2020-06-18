#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


bool checkans (vector<int> p,int x){
    int l = p.size();
    bool flag = true;
    for(int i = 0;i<l;++i){
        if(p.at(i)==x){
            flag =false;
        }
    }
    return flag;
}

int main(){
    int x ,n;cin>>x>>n;
    vector <int> p(n);
    rep(i,n){
        cin>>p.at(i);
    }
    bool one =checkans(p,x) ;
    if(one){
        cout<<x<<endl;
        return 0;
    }

    int ans = 0;
    int count = 1;
    while(1){
       // bool under = binary_search(p.begin(),p.end(),x-count);
       // bool top =  binary_search(p.begin(),p.end(),x+count);
       bool under = checkans(p,x-count);
       bool top = checkans(p,x+count);
        if(under){
            ans = x-count;
            break;
        }
        if(top){
            ans = x+count;
            break;
        }
        ++count;
    }
    cout<<ans<<endl;

}
