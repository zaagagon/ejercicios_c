#include <iostream>
using namespace std;
/*#include <conio.h>
#include <stdlib>
#include <math>*/
int main()
{
  float n1, n2;
  char opcion;//variable para menu
  double r;
  cout<<"*+Programa que realiza operaciones matematicas**";
  cout<<"Ingrese primer Nro: ";
  cin>>n1;
  cout<<"Ingrese operador (+,-,*,/,#): ";
  cin>>opcion;//dato ingresado por teclado
  cout<<"Ingrese segundo Nro: ";
  cin>>n2;
  //sentencia para crear menu
  switch(opcion){case '+': r=n1+n2; break;
             case '-': r=n1-n2; break;
             case '*': r=n1*n2; break;
             case '/': r=n1/n2; break;
             //case '#': r=pow(n1,n2); break;
             default: cout<<"Operador no definido";
             exit(1);
             }
  cout<<"El resultado es: "<<r;
 

//getch();
}