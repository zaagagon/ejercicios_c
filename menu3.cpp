#include <iostream>
using namespace std;

int suma(int a,int b){
    return a+b;
}

/*#ifdef _WIN32
  #include<windows.h>
#endif  
//funcion limpiar pantalla
void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}*/

//funcion principal
//g++ menu3.cpp -o menu3
int main(){
    //prueba 
     //limpiar_pantalla();
     system("clear");
     system("ls -l");//comandos unix desde cpp
    cout<<"** PRUEBA **";
    cout<<"\n";
    cout<<"Resultado de la operación : "<<suma(4,5)<<"\n";//imprime enter

}