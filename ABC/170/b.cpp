#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int x,y;cin>>x>>y;
    int min = 2*x;
    int max = 4*x;
    bool flag = false;
    for(int i=min;i<=max;i+=2 ){
        if(i==y){
            flag =true;
            break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
