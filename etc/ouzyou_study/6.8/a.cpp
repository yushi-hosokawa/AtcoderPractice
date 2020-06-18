#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n;cin>>n;
    int ans;

    if((n/2)%2==0){
        ans = n%20;
    }

    else{
        ans = 20-(n%20)+1;
    }
    cout<<ans<<endl;

}
