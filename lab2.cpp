#include <iostream>
#include <cmath>
using namespace std;
int factorial(int);
float euler(int);

int main(){
int opcion;
  bool vivo = true;
  while(vivo){
    cout<<"-------Menu-------: "<<endl
    <<"Ejercicio 1: 1"<<endl
    <<"Ejercicio 2: 2"<<endl
    <<"Salir: 3"<<endl;
    cin>>opcion;
    switch(opcion){
      case 1:
        int x;
        cout<<"Ingrese un entero: ";
        cin>>x;
        cout<<"El numero de Euler es: "<<euler(x)<<endl;
        break;
      case 2:
        int x1;
        int y1;
        int x2;
        int y2;
        int x3;
        int y3;

        break;
      case 3:
        vivo = false;
        break;
    }
  }
}
int factorial(int x){
  if(x==0){
    return 1;
  }else{
    return x * factorial(x-1);
  }
}
float euler(int x){
  float suma=0;
  for(int i=0;i<13;i++){
    suma+=((pow(x,i))/factorial(i));
  }
  return suma;
}
