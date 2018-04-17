#include <iostream>
#include <cstdlib>

using namespace std;
//se inicializan las funciones de la primera y segunda derivada"
double f(double t, double x);
double f2(double t, double x, double z);


int main(){
//se inicializan los ki para runge-kutta"
 double k1;
 double k2;
 double k3;
 double k4;

 double k5;
 double k6;
 double k7;
 double k8;
 //se inicilzan las constantes a usar"
 double z=0;
 double x_inicial=10;
 double x_old=10;
 double x_new;
 double t=0;
 double h=0.0001;
 double N=10/h; 

 
 int i;


//se empieza a ejecutar runge-kutta
while( i<N && x_new>(1/100)*x_inicial){
  //se dan valores para los ki"
  //para y
  k1=f2(t,x_old,z);
  k2=f2(t+(h/2),x_old+(h/2)*k1,z);
  k3=f2(t+(h/2),x_old+(h/2)*k2,z);
  k4=f2(t+h,x_old+h*k3,z);  

  
  //para z"
  k5=f(t,x_old);
  k6=f(t+(h/2),x_old+(h/2)*k1);
  k7=f(t+(h/2),x_old+(h/2)*k2);
  k8=f(t+h,x_old+h*k3);  
 
  //se dan el valor de z_i+1 y y_i+1, ademas se avanza en el x"
  z=z+(h/6)*(k5+2*k6+2*k7+k8);
  x_new=x_old+(h/6)*(k1+2*k2+2*k3+k4);
  //se imprime"
  
   cout<<x_new<<" "<<z<<" "<<t<<endl;
  
  //"se hace el avance"
  t=t+h;
  //"en caso de que llegue al uno porciento de la distancia acaba el for"
   x_old=x_new;
  i++;
  }
return(0);
}

//"funcion que devuelve dz/dt"
double f(double t, double x){

 double G=10;
 double M=1000;
 
return((-M*G)/(x*x));
}

//"funcion que devuelve dx/dt" 
double f2(double t, double x, double z){
return(z);
}




