#include <stdlib.h>
#include <stdio.h>
#define comecar main
#define rotina void
#define texto char
#define inteiro int
#define numero float
texto texto_entrada[81];

texto *entrada();
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

texto *entrada(){
	texto *t;
	t=fgets(texto_entrada,79,stdin);
	return t;

}
