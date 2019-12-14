#include "pt.h"


inteiro comecar(){
	texto *texto1;
	apagar();
	escrever("escreva o seu nome?");
	texto1=entrada();
	escrever("o texto que digitou foi:");
	escrever(texto1);
	}
