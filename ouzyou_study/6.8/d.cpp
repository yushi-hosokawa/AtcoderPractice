#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n;cin>>n;
    int count = 0;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int sum = 0;
    rep(i,n){

        if(a[i]!=0){
            count++;
            sum+=a[i];
        }

    }
    cout<<ceil((double)sum/(double)count)<<endl;



}
