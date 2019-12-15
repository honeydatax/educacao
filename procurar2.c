#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	texto txt1[tamanho];
	texto txt2[tamanho];
	texto *apontador;
	apagar();

    copia(txt1,"ola mundo!.");
    copia(txt2,"mundo");
    apontador=em(txt1,txt2);
    apontador[4]=terminado;
	localiza(1,1);
	escrever(apontador);


}
