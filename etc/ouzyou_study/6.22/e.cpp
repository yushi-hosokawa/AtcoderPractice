#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    string s;cin>>s;
    int count = 0;
    int n = s.size();
    for(int i =0;i<n;++i){
        for(int j = 0;j<n-1;++j){
            int s1 =s[j];
            int s2 =s[j+1];
            if(s1=='B'&&s2=='W'){
                s[j]='W';
                s[j+1]='B';
                ++count;
            }
        }
    }
    cout<<count<<endl;

}
