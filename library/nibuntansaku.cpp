#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//二分探索及びそのライブラリの説明
//使い道その1 普通にvector内で何番目に位置するかを特定するため（この関数では求めたいものが複数同じvector内にあるとき最小のindexが表示される）
//使い道その2 ある「条件」に対して、その条件を満たす最小の x を見つけたいというときに使える
//線形探索はO(n)　二分探索はO(logn)になるのではやい

// index が条件を満たすかどうか
bool isOK(vector<int> vec,int index, int key) {
    if (vec[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(vector<int> vec ,int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)vec.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(vec,mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}


//問題の変数の条件の最大値を使って、ある条件を満たす最小のものを2分探索を使って探す方法
//条件を満たす最小の値を求める問題について、条件を関数とした問題のとき方は
//アルゴリズムの本P136の問題(etcのBook_algorismのchapter5のALSD1_4_D)
//ただライブラリ使うだけじゃ解けない参考になる問題




int main() {
    //整列されているvectorとvectorの中身の値keyを引数にとると、keyの値より大きい最小の数が格納されている最小のvectorの配列番号(index)が帰ってくる
    vector <int> a ={1, 14, 32, 51, 51, 51, 243, 419, 750, 910};
    cout << binary_search(a,51) << endl; // a[3] = 51 (「最小の index」なので 3)
    cout << binary_search(a,1) << endl; // a[0] = 1　で0が出力
    cout << binary_search(a,910) << endl; // a[9] = 910　で9が出力


    cout <<"52以上を満たす最小の値は"<< binary_search(a,52)+1 <<"番目の"<<a.at(binary_search(a,52))<< endl; // 6
    cout << binary_search(a,0) << endl; // 0
    cout << binary_search(a,911) << endl; // 10 (場外)

    //----------------------------------------------------------------------------------
    //標準ライブラリにいろんな関数がありました
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