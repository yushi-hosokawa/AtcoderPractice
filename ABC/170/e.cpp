#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n,q ;cin>>n>>q;
    vector <int> a(n+1),b(n+1),c(q),d(q);
    int inf = 200005;
    for(int i =1;i<=n;++i)cin>>a[i]>>b[i];
    rep(i,q)cin>>c[i]>>d[i];

    //園児の番号を保存
    vector<multiset<int>> data(inf);
    //幼稚園の最大値のみを入れるmultiset
    multiset<int> max_d ;
    for(int i =1;i<=n;++i){
        //b[i]幼稚園に点数a[i]がいる
        data.at(b[i]).insert(a[i]);
    }

    //各幼稚園の最大値をmax_dに入れる
    rep(i,inf){
        if(data.at(i).size()!=0){
            max_d.insert(*data.at(i).rbegin());


        }
    }


    rep(i,q){
        int tmp=0,before=0,after=0,before2=0,after2 =0;
        //移動先の幼稚園にひとがいる時
        if(data.at(d[i]).size() != 0) {
             before = *data.at(b.at(c[i])).rbegin();
             after = *data.at(d[i]).rbegin();

            max_d.erase(before);
            max_d.erase(after);

            //転園する園児のレートをtmpに
             tmp = a.at(c.at(i));

            data.at(b.at(c[i])).erase(tmp);
            data.at(d[i]).insert(tmp);
        }

        //いない時
        else {
             before = *data.at(b.at(c[i])).rbegin();
            max_d.erase(before);
             tmp = a.at(c.at(i));
            data.at(b.at(c[i])).erase(tmp);
            data.at(d[i]).insert(tmp);

        }

        //移動前の幼稚園に園児がいるとき
        if(data.at(b.at(c[i])).size()!=0) {
            before2 = *data.at(b.at(c[i])).rbegin();
            after2 = *data.at(d[i]).rbegin();
            max_d.insert(before2);
            max_d.insert(after2);
        }
        //いない時
        else {
            after2 = *data.at(d[i]).rbegin();
            max_d.insert(after2);
        }

        cout<<*max_d.begin()<<endl;

    }

}
