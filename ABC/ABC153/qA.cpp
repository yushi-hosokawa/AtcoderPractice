#include <bits/stdc++.h>
using namespace std;

int main(){
    int H , A;
    int counter=1;

    cin >> H >> A ;
    int sum = A;
    while (H>sum){
      sum += A;
      ++counter;
    }
    cout <<counter;
}
//多分10分ぐらい
//taipo多すぎ
//用はHをAで割って切り上げをすればいい問題
//切り上げのやり方 ans=(H+(A-1))/A
