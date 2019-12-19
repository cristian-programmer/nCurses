#include <iostream>

using namespace std;

/*
    Aqui se resuelve el problema de los tipos 
    para el caso de pasar por parametros un entero y un doble
    dado que en el caso anterior solo se permitia un tipo de datos como argumento
    no era posible pasar un entero y un doble a la funcion
    pero ahora declarando 2 tipos de datos como se ve en la linea 17
    y en la definicion de la funcion  ya de los parametros se permiten con dos tipos distintos 
    ahora es posible pasar por parametro ambos tipos de datos.
    
    i = GetMin<int, long>(j,l);

*/

template <class TInteger, class UDouble>

TInteger GetMin(TInteger a, UDouble b){
    return (a < b ? a : b);
}

int main(){
    int i=1,j=2 ;
    long l=3;

    i = GetMin<int, long>(j,l);
    cout << i << endl;

    return 0;
}