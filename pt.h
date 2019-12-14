#include <stdlib.h>
#include <stdio.h>
#define comecar main
#define rotina void
#define texto char
#define inteiro int
#define numero float

rotina escrever(texto *txt);
rotina escrevern(numero n);

rotina escrever(texto *txt){
	printf("%s\n",txt);
}


rotina escrevern(numero n){
	printf("%f\n",n);
}

rotina apagar(){
	puts("\033c");
}
