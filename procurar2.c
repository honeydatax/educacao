#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	cadeia txt1;
	cadeia txt2;
	cadeia apontador;
	apagar();

    txt1=(texto*)"ola mundo!.";
    txt2=(texto*)"mundo";
    apontador=em((texto*)txt1.txt,(texto*)txt2.txt);
	localiza(1,1);
	escrever((texto*)apontador.txt);


}
