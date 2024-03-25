#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
  int Ia,Ib,Fa,Fb, cont=0;
  cin >> Ia >> Ib >> Fa >> Fb;
  
    if(Ia!=Fa && Ib!=Fb){
      cont++;
    } else if(Ia!=Fa && Ib==Fb){
      cont++;
    } else if(Ia==Fa && Ib!=Fb){
      cont++;
      cont++;
    }
  cout << cont;
return 0;
}