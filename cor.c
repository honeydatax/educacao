#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro i;
	apagar();
	localiza(1,1);
	papel(branco);
	tinta(preto);
	entre(i=0;i<16;i++){
		localiza(i,i);
		escrever("ola mundo.!");
	}
	
}
