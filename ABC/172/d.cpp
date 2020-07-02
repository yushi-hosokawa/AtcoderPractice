#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
vector<int> Eratosthenes( const int N )
{
    std::vector<bool> is_prime( N + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}

int main(){
    int n;cin>>n;
    vector<int> x(10000005);
    vector<int> primes =Eratosthenes(n);
    ll ans = 0;
    for(auto &p: primes){
        //cout<<p<<endl;
        ll y =1;
        x[p]--;
        while(p*y<=n){
            x[y*p]++;
           // cout<<y*p<<endl;
            y++;
        }

    }
    ll sum = 0;
    for(int i = 1;i<=n;++i){
       // cout<<x[i]+2<<endl;
        sum+=(x[i]+2)*i;
    }
    cout<<sum-1<<endl;
}