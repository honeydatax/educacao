#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	cadeia txt1;
	cadeia txt2;
	apagar();
	entre(i=0;i<16;i++){
		localiza(0,i+1);
		txt1.espaco(18-i);
		txt2.encher((texto*)"*",(i+1)*2);
		txt1+=txt2;
		escrever((texto*)txt1.txt);
	}
		
}
