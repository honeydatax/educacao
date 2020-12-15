#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro i;
	inteiro tamanho=100;
	cadeia txt1;
	cadeia txt2;
	cadeia txt3;
	cadeia apontador;
	apagar();
	localiza(0,1);
    txt2=(texto*)"ola tudo bem contigo?";
    escrever(txt2.txt);
    apontador=(texto*)txt2.txt+9;
    txt1=apontador;
    escrever(txt1.txt);
}
