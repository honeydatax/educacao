#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro i;
	inteiro tamanho=100;
	texto txt1[tamanho];
	texto txt2[tamanho];
	texto txt3[tamanho];
	texto *apontador;
	apagar();
	localiza(0,1);
    copia(txt1,"");
    copia(txt2,"ola tudo bem contigo?");
    apontador=txt2+9;
    copia(txt1,apontador);
    escrever(txt1);
}
