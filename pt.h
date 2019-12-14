#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define comecar main
#define rotina void
#define texto char
#define inteiro int
#define numero float
#define entre for
#define ficheiro FILE
texto LER[]="r+";
texto ESCREVER[]="w+";
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
rotina tinta(inteiro cor);
rotina papel(inteiro cor);
ficheiro *abrir(texto *files,texto *alue);
inteiro fechar(ficheiro *files);
rotina gravar(ficheiro *files,texto *txt);
texto *ler(ficheiro *files);
texto copia(texto *destino,texto *origem);
texto acrescentar(texto *destino,texto *origem);


rotina escrever(texto *txt){
	if (txt!=NULL)printf("%s\n",txt);
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

ficheiro *abrir(texto *files,texto *value){
	return fopen(files,value);
}

inteiro fechar(ficheiro *files){
	return fclose(files);
}

rotina gravar(ficheiro *files,texto *txt){
	fprintf(files,"%s\n",txt);
}


texto *ler(ficheiro *files){
	return fgets(texto_entrada,78,files);
}


texto copia(texto *destino,texto *origem){
	strcpy(destino,origem);
}

texto acrescentar(texto *destino,texto *origem){
	strcat(destino,origem);
}

