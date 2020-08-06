#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct Node{
  int key;
  Node *prev, *next;
};

Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil ->next =nil;
  nil ->prev = nil;
}

void insert(int key){
  Node *x = (Node *)malloc(sizeof(node));
  x ->next = nil->next;
  nil -> next->prev = x;
  nil -> next = x;
  x->prev = nil;
}

int main(){

}
