#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n,k;cin>>n>>k;
    double ans =0.0;
    if(n%2==0){
        ans = pow(((n/2)-1,;
    }
    else {
        ans = pow(n/2,k)+pow((n/2),(n-k+1));
    }
    double x = pow(n,n);
    cout<<setprecision(15)<<ans/pow(n,n)<<endl;

}
