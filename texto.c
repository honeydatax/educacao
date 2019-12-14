#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	texto txt1[tamanho];
	apagar();
	localiza(1,1);
	papel(branco);
	tinta(preto);
	copia(txt1,"ola ");
	acrescentar(txt1,"mundo ");
	acrescentar(txt1,"!.");
	escrever(txt1);

		
}
