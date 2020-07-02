#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){

    int n ; cin >>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    ll sum = n;
    int tmp = 0;
    for(int i =0;i<n-1;++i){
        //前の値と比較して単調増加ならtmpにチャージ
        if(a[i+1]>a[i]){
            tmp++;
        }
        //そうでないならtmpに溜まった数字の回数足す
        else {
            if(tmp>0){
                for(int j =1;j<=tmp;++j){
                    sum+=j;
                }
                tmp=0;
            }
        }
    }
    //最後にtmpに溜まった数字の回数足す
    if(tmp >0){
        for(int j =1;j<=tmp;++j){
            sum+=j;
        }
    }

    cout<<sum<<endl;

}
