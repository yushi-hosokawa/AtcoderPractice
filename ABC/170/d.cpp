#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n ;cin>>n;
    int count = 0;
    vector <int> a(n);
    rep(i,n){
        cin>>a.at(i);
    }

    sort(a.begin(),a.end(),greater<int>());

    bool flag ;
    rep(i,n-1){
        flag =true;
        for(int j = i+1;j<n;j++){
            int ans = a[i]%a[j];
            if(ans==0){
                flag =false;
                break;
            }

        }

        if(flag)count++;
    }
    if(a.at(n-2)!=a.at(n-1))count++;
    cout <<count<<endl;

}
