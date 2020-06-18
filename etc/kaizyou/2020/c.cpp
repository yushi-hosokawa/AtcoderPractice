#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n, k;cin>>n>>k;
    vector<int> a(n+10);
    vector<int> b(n+10);
    for(int i = 1;i<=n;++i){
        cin>>a[i];
    }
    //a[1]と１番目を対応
    for(int i =0;i<k;++i){
        for(int j = 1;j<=n;++j){

            for(int k =j-a[j];k<=j+a[j];++k){
                if (k<=0 ||k>n)continue ;
                else{
                   // cout<<j<<"の電球の明るさ"<<a[j]<<" "<<k<<"に+1"<<endl;
                    b[k]++;
                }
            }
        }
        for(int j = 1;j<=n;++j){
            a[j] = b[j];
            b[j] = 0;
        }
    }
    cout<<a[1];
    for(int i = 2;i<=n;++i){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
