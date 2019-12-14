#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	texto txt1[tamanho];
	texto txt2[tamanho];
	apagar();
	entre(i=0;i<16;i++){
		localiza(0,i+1);
		espaco(txt1,18-i);
		encher(txt2,'*',(i+1)*2);
		acrescentar(txt1,txt2);
		escrever(txt1);
	}
		
}
