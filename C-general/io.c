#include <stdio.h>

/*escribir y leer por la terminal, este ejercicio nos muestra como usar
 getchar y putchar.*/

main(){

	printf("El valor de EOF %i", EOF);
	int c;
	c= getchar(); // obtiene el caracter presionado en la terminal
	while (c != EOF){  // EOF (FIN DE LINEA DEL ARCHIVO)
			   // es el indicador de fin del archivo su valor: -1.
		putchar(c);
		c = getchar();

	}
}
