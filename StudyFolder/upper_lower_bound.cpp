#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    //整列されているvectorとvectorの中身の値keyを引数にとると、keyの値より大きい最小の数が格納されている最小のvectorの配列番号(index)が帰ってくる
    vector <int> a ={1, 14, 32, 51, 51, 51, 243, 419, 750, 910};
    //標準ライブラリにいろんな関数がありました
    //二分探索及びkey以上の要素かkeyより大きい要素のとき使える
    //二分探索で配列の中にkeyが存在しているかがわかるbinary_search(作った関数と名前一緒でわかりにくい)
    bool x =binary_search(a.begin(),a.end(),32);//イテレータを入れることに注意
    cout<< x<< endl;

    //----------------------------
    //key以上の要素を調べるのに使えるlower_boundがある
    auto iter1 = lower_bound(a.begin(),a.end(),243);
    //要素の表示
    cout<<"240以上で最小の数字"<<*iter1<<endl;
    //lower_boundから先頭のイテレータを引くとその要素が何番目か、keyより下の要素は何個かというのがわかる
    cout<<"その要素の順番"<<iter1-a.begin()<<endl;
    //末尾のイテレータからlower_boundのイテレータを引くとkey以上の要素の数がわかる(自分も含めた要素数)
    cout<<"key以上の要素の数"<<a.end()-iter1<<endl;

    //------------------
    //keyより大きい要素を調べるのに使えるupper_boundがある
    //lower_boundと違ってkeyの値を含めない特徴がある
    auto iter2 =upper_bound(a.begin(),a.end(),243);
    //要素の表示
    cout<<"240より大きくて最小の数字"<<*iter2<<endl;
    //upper_boundから先頭のイテレータを引くとkey以下の要素は何個かというのがわかる
    cout<<"その要素の順番"<<iter2-a.begin()<<endl;
    //末尾のイテレータからupper_boundのイテレータを引くとkeyより要素の数がわかる
    cout<<"key以上の要素の数"<<a.end()-iter2<<endl;

}