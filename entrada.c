#include "pt.h"


inteiro comecar(){
	cadeia texto1;
	apagar();
	escrever((texto*)"escreva o seu nome?");
	texto1=(texto*)entrada();
	escrever((texto*)"o texto que digitou foi:");
	escrever((texto*)texto1.txt);
	}
