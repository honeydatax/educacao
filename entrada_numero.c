#include "pt.h"


inteiro comecar(){
	numero n=0;
	cadeia texto1;
	apagar();
	escrever((texto*)"escreva um numero?");
	texto1=(texto*)entrada();
	n=entradan(texto1.txt);
	escrever((texto*)"o numero que digitou foi:");
	escrevern(n);
	}
