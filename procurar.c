#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro tamanho=100;
	inteiro i;
	texto txt1[tamanho];
	texto txt2[tamanho];
	apagar();

    copia(txt1,"hello world !.");
    copia(txt2,"world");
	localiza(1,1);
	escrever(em(txt1,txt2));


}
