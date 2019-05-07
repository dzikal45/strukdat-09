#include <iostream>
using namespace std;
const int maxElement = 255;
struct stack {
  char isi[maxElement];
  int top;
  char hapus [maxElement];
};
stack s;
void createStack (stack& s){
  s.top=-1;
}
void push(stack& s,char elemenBaru,int n){
  if (s.top==n-1){
    cout<<"Tumpukan sudah penuh"<<endl;
  }
  else{

    s.top=s.top+1;
    s.isi[s.top]=elemenBaru;
  }
}
void pop(stack& s,int n){
  if(s.top<0){
    cout<<"tumpukan sudah kosong"<<endl;
  }
  else {
    for(int i=n;i>=0;i--){
      s.hapus[i]=s.isi[s.top];
      s.top=s.top-1;
    }
  }
}
main(){
  char baru;
  char hapus ;
  int n;
  createStack(s);
  cout<<"Masukan Banyak huruf :"; cin>>n;
  for(int i=0;i<n;i++){
    cout<<"Masukan huruf :"; cin>>baru;
    push(s,baru,n);
  }
  for(int i=0;i<s.top;i++){
    cout<<s.isi[i]<<","<<endl;
  }
  for(int i=0;i<s.top;i++){
    pop(s,n);
  }

  for(int i=n;i>0;i--){
    cout<<s.hapus[i]<<endl;
  }
}
