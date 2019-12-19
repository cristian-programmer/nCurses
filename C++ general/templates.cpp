#include <iostream>
using namespace std;

/*se puede tener:
 - parametros de funciones genericos
 - clases genericos
 - atributos de clase genericos
 - variables genericos
 */

 /* actulamente el template es de un tipo de dato 
    que llamamos generic que se definio en la linea 4
    la funcion GetMax devuelve ese tipo de dato y recibe como parametro el mismo tipo de dato
    tanto de a como b el compilador detecta en la invocacion de la funcion por el <type> que tipo de variable es
    por ahora se añade <int> y <long>, eso quiere decir que al ejecutar debo pasar los argumentos como el tipo de dato 
    que especificique a la funcion
    GetMax<int>(i,j) sus argumentos deben ser entero
    GetMax<long>(l,m) sus argumentos deben ser doble
    si se hace algo como
    int i=1, long l = 4;
    GetMax<int>(i,l) no se puede ya que l es un tipo de datos distinto a <int>. 
    ver el siguiente archivo templates2.cpp
  
  
  */

template <class generic>

generic GetMax(generic a, generic b){
    T result = (a > b) ? a : b; 
    return result;
}


int main(){
    
    int i=5, j=6, k;
    long l=10, m=5, n;

    k = GetMax<int>(i,j);
    n = GetMax<long>(l,m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}