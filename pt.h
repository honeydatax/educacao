#include <stdlib.h>
#include <stdio.h>
#define comecar main
#define rotina void
#define texto char
#define inteiro int
#define numero float
#define entre for
texto texto_entrada[81];
inteiro cor_papel=0;
inteiro cor_tinta=7;
inteiro preto=0;
inteiro vermelho=1;
inteiro verde=2;
inteiro laranja=3;
inteiro azul=4;
inteiro rosa=5;
inteiro magenta=6;
inteiro cinza=7;
inteiro branco=7;

texto *entrada();
rotina escrever(texto *txt);
rotina escrevern(numero n);
numero entradan(texto *txt);
rotina localiza(inteiro x,inteiro y);

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

numero entradan(texto *txt){
	return atof(txt);
}

rotina localiza(inteiro x,inteiro y){
	printf("\e[%d;%df",y+1,x+1);
}

rotina papel(inteiro cor){
	cor_papel=cor;
	printf("\e[0;%d;%dm ",cor_tinta+30,cor_papel+40);
}

rotina tinta(inteiro cor){
	cor_tinta=cor;
	printf("\e[0;%d;%dm ",cor_tinta+30,cor_papel+40);
}

