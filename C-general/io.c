#include <stdio.h>

main(){

	int c;
	/* escribiendo el getchart directamente en el while, nos ahorramos
	unas lineas de codigo, se necesita un doble (C=getchar())
	para que primero se haga esa asignacion y luego compare, si no 
	se aplica, se entendera que funciona c  = (getchar() != EOF)
	es decir primero compara y luego asigna, y dara un mal resultado */
	while ((c=getchar())!= EOF) putchar(c) ;
}
