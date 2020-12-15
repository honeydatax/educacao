#include "pt.h"


inteiro comecar(){
	numero n=0;
	inteiro i;
	texto *txt1;
	ficheiro *ficheiro1;
	apagar();
	localiza(1,1);
	papel(azul);
	tinta(branco);
	
	ficheiro1=abrir((texto*)"meu.txt",ESCREVER);
		gravar(ficheiro1,(texto*)"ola mundo.!");
	fechar(ficheiro1);

	ficheiro1=abrir((texto*)"meu.txt",LER);
		txt1=ler(ficheiro1);
		escrever((texto*)txt1);
	fechar(ficheiro1);

		
}
