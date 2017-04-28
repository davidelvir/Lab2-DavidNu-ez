#include <iostream>
#include <cmath>
using namespace std;
int factorial(int);
float euler(int);
float distancia(int,int,int,int);
float altura(float,float,float);

int main(){
int opcion;
  bool vivo = true;
  while(vivo){
    cout<<"---------Menu--------- "<<endl
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
      case 2:{
        int x1;
        int y1;
        int x2;
        int y2;
        int x3;
        int y3;
        int x4;
        int y4;
        cout<<"Ingrese la coordenada x de A: ";
        cin>>x1;
        cout<<"Ingrese la coordenada y de A: ";
        cin>>y1;
        cout<<"Ingrese la coordenada x de B: ";
        cin>>x2;
        cout<<"Ingrese la coordenada y de B: ";
        cin>>y2;
        cout<<"Ingrese la coordenada x de C: ";
        cin>>x3;
        cout<<"Ingrese la coordenada y de C: ";
        cin>>y3;
        cout<<"Ingrese la coordenada x de D: ";
        cin>>x4;
        cout<<"Ingrese la coordenada y de D: ";
        cin>>y4;
        cout<<endl;
        if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x1==x4&&y1==y4)||(x2==x3&&y2==y3)||(x2==x4&&y2==y4)||(x3==x4&&y3==y4)){
          cout<<"Uno de los puntos es iguales, vuelva a iniciar!"<<endl;
          break;
        }
        cout<<"Punto A: ("<<x1<<","<<y1<<")"<<endl; 
        cout<<"Punto B: ("<<x2<<","<<y2<<")"<<endl; 
        cout<<"Punto C: ("<<x3<<","<<y3<<")"<<endl; 
        cout<<"Punto D: ("<<x4<<","<<y4<<")"<<endl;
        cout<<endl;
        float AC = distancia(x1,y1,x3,y3);
        float AB = distancia(x1,y1,x2,y2);
        float BC = distancia(x2,y2,x3,y3);
        float CD = distancia(x3,y3,x4,y4);
        float DA = distancia(x1,y1,x4,y4);
        cout<<"Los lados del trapezoide miden: "<<endl;
        cout<<"Lado 1: "<<AB<<endl;
        cout<<"Lado 2: "<<BC<<endl;
        cout<<"Lado 3: "<<CD<<endl;
        cout<<"Lado 4: "<<DA<<endl;
        cout<<endl;

        cout<<"Los lados del triangulo 1 miden: "<<endl;
        cout<<"Lado 1: "<<AB<<endl;
        cout<<"Lado 2: "<<BC<<endl;
        cout<<"Lado 3: "<<AC<<endl;
        cout<<endl;

        cout<<"Los lados del triangulo 2 miden: "<<endl;
        cout<<"Lado 1: "<<DA<<endl;
        cout<<"Lado 2: "<<CD<<endl;
        cout<<"Lado 3: "<<AC<<endl;
        cout<<endl;

        float p1 = AB+BC+AC;
        float p2 = DA+CD+AC;

        cout<<"El semiperimetro del triangulo 1 es: "<<p1/2<<endl;
        cout<<"El semiperimetro del triangulo 2 es: "<<p2/2<<endl;
        cout<<"El perimetro del triangulo 1 es: "<<p1<<endl;
        cout<<"EL perimetro del triangulo 2 es: "<<p2<<endl;
        cout<<endl;

        cout<<"Las alturas del triangulo 1 miden: "<<endl;
        cout<<"Altura 1: "<<altura(AB,BC,AC)<<endl;
        cout<<"Altura 2: "<<altura(BC,AB,AC)<<endl;
        cout<<"Altura 3: "<<altura(AC,AB,BC)<<endl;
        cout<<endl;

        cout<<"Las alturas del triangulo 2 miden: "<<endl;
        cout<<"Altura 1: "<<altura(DA,CD,AC)<<endl;
        cout<<"Altura 2: "<<altura(CD,DA,AC)<<endl;
        cout<<"Altura 3: "<<altura(AC,DA,CD)<<endl;
        cout<<endl;

        cout<<"El area del trapezoide es: "<<((AC*altura(AC,AB,BC))/2)+((AC*altura(AC,DA,CD))/2)<<endl;
        break;
             }
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
float distancia(int x1,int y1, int x2,int y2){
  return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
float altura(float a,float b, float c){
  float s = (a+b+c)/2;
  
  float resultado = (2/a)*sqrt(s*(s-a)*(s-b)*(s-c));
  return resultado;
}
