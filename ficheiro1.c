#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro i;
	texto *txt1;
	ficheiro *ficheiro1;
	apagar();
	localiza(1,1);
	papel(branco);
	tinta(preto);
	
	ficheiro1=abrir("meu.txt",ESCREVER);
		gravar(ficheiro1,"ola mundo.!");
	fechar(ficheiro1);

	ficheiro1=abrir("meu.txt",LER);
		txt1=ler(ficheiro1);
		escrever(txt1);
	fechar(ficheiro1);

		
}
