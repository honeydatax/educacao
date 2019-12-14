#include "pt.h"


inteiro comecar(){
	numero n=0;
	texto *texto1;
	apagar();
	escrever("escreva um numero?");
	texto1=entrada();
	n=entradan(texto1);
	escrever("o numero que digitou foi:");
	escrevern(n);
	}
