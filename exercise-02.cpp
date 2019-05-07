#include<iostream>
using namespace std;
struct stack{
  char isi;
  stack* next;
};
typedef stack* pointer;
typedef pointer list;
void createlist(list& top){
  top=NULL;
}
void createElmt(pointer& pBaru){
  pBaru= new stack;
  cout<<"Masukan huruf :"; cin>>pBaru->isi;
  pBaru->next=NULL;
}
void push(list& top,pointer pBaru){
  if(top==NULL){
    top=pBaru;
  }
  else{
    pBaru->next=top;
    top=pBaru;
  }
}
void pop(list& top,pointer pHapus){
  if(top==NULL){
    cout<<"list kosong";
  }
  else{
    pHapus=top;
    top=pHapus->next;
    pHapus->next=NULL;
  }
}
void traversal(list top){
  pointer pBantu;
  pBantu=top;
  while(pBantu!=NULL){
    cout<<pBantu->isi<<",";
    pBantu=pBantu->next;
  }
}
main(){
  pointer pb,ph;
  list q;
  int n;
  createlist(q);
  cout<<"Masukan banyak huruf:";cin>>n;
  for(int i=0;i<n;i++){
    createElmt(pb);
    push(q,pb);
  }
  traversal(q);
}
