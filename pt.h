#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#define comecar main
#define rotina void
#define texto char
#define inteiro int
#define numero float
#define entre for
#define ficheiro FILE
#define horas time
#define aleatorio srandom
#define longo long
#define vazio NULL

class cadeia{
public :
char *txt=NULL;
bool b;
cadeia(){
}
void relatorio(){
	printf("%s\n",txt);
}


cadeia& operator =(char *s){
	char *ss;
	ss=s+strlen(txt)+2;
	if(ss[0]=='!')free(txt);
	txt=s;
	return *this;
}
cadeia& operator +(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(txt)+4+strlen(s)+4;
	sss=txt;
	ss=txt+strlen(txt)+2;
	if(txt==NULL || ss[0]!='!'){
		txt=(char*)(malloc(size));
		strcpy(txt,sss);
	}else{
		txt=(char*)(realloc(txt,size));		
	}
	strcat(txt,s);
	ss=txt+strlen(txt)+2;
	ss[0]='!';
	return *this;
}
cadeia& operator +=(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(txt)+4+strlen(s)+4;
	sss=txt;
	ss=txt+strlen(txt)+2;
	if(txt==NULL || ss[0]!='!'){
		txt=(char*)(malloc(size));
		strcpy(txt,sss);
	}else{
		txt=(char*)(realloc(txt,size));		
	}
	strcat(txt,s);
	ss=txt+strlen(txt)+2;
	ss[0]='!';
	return *this;
}
bool& operator ==(cadeia s){
	b=(bool)(0==1);
	if(strcmp(txt,s.txt)==0)b=(bool)(0==0);
	return b;
}
bool& operator !=(cadeia s){
	b=(bool)(0==1);
	if(strcmp(txt,s.txt)!=0)b=(bool)(0==0);
	return b;
}
bool& operator >(cadeia s){
	b=(bool)(0==1);
	if(strcmp(txt,s.txt)>0)b=(bool)(0==0);
	return b;
}
bool& operator <(cadeia s){
	b=(bool)(0==1);
	if(strcmp(txt,s.txt)<0)b=(bool)(0==0);
	return b;
}
cadeia &operator !(){
	char *sss;
	char *ss;
	char *s;
	int i=0;
	size_t size=strlen(txt)+4;
	sss=txt;
	s=txt;
	txt=(char*)(malloc(size));
	for(i=0;i<strlen(s);i++)txt[i]=s[strlen(s)-i-1];
	txt[strlen(s)]=0;
	ss=txt+strlen(txt)+2;
	ss[0]='!';
	ss=s+strlen(s)+2;
	if(ss[0]=='!')free(s);
	return *this;
}
cadeia& operator <<(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(txt)+4+strlen(s)+4;
	sss=txt;
	ss=txt+strlen(txt)+2;
	if(txt==NULL || ss[0]!='!'){
		txt=(char*)(malloc(size));
		strcpy(txt,sss);
	}else{
		txt=(char*)(realloc(txt,size));		
	}
	strcat(txt,s);
	ss=txt+strlen(txt)+2;
	ss[0]='!';
	return *this;
}
cadeia& operator >>(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(txt)+4+strlen(s)+4;
	sss=txt;
	ss=txt+strlen(txt)+2;
	if(txt==NULL || ss[0]!='!'){
		txt=(char*)(malloc(size));
		strcpy(txt,sss);
	}else{
		txt=(char*)(realloc(txt,size));		
	}
	strcat(txt,s);
	ss=txt+strlen(txt)+2;
	ss[0]='!';
	return *this;
}
};



texto LER[]="r+";
texto ESCREVER[]="w+";
texto texto_entrada[81];
inteiro cor_papel=0;
inteiro cor_tinta=7;
inteiro preto=0;
inteiro vermelho=1;
inteiro verde=2;
inteiro laranja=3;
inteiro azul=4;
inteiro rosa=5;
inteiro magenta=6;
inteiro cinza=7;
inteiro branco=7;
texto terminado=0;

texto *entrada();
rotina escrever(texto *txt);
rotina escrevern(numero n);
numero entradan(texto *txt);
rotina localiza(inteiro x,inteiro y);
rotina tinta(inteiro cor);
rotina papel(inteiro cor);
ficheiro *abrir(texto *files,texto *alue);
inteiro fechar(ficheiro *files);
rotina gravar(ficheiro *files,texto *txt);
texto *ler(ficheiro *files);
texto *copia(texto *destino,texto *origem);
texto *acrescentar(texto *destino,texto *origem);
texto *encher(texto *destino,texto t,inteiro tamanho);
texto *espaco(texto *destino,inteiro tamanho);
texto *em(texto *destino,texto *procurar);

rotina escrever(texto *txt){
	if (txt!=NULL)printf("%s\n",txt);
}


rotina escrevern(numero n){
	printf("%f\n",n);
}

rotina apagar(){
	puts("\033c");
}

texto *entrada(){
	texto *t;
	t=fgets(texto_entrada,79,stdin);
	return t;

}

numero entradan(texto *txt){
	return atof(txt);
}

rotina localiza(inteiro x,inteiro y){
	printf("\e[%d;%df",y+1,x+1);
}

rotina papel(inteiro cor){
	cor_papel=cor;
	printf("\e[0;%d;%dm ",cor_tinta+30,cor_papel+40);
}

rotina tinta(inteiro cor){
	cor_tinta=cor;
	printf("\e[0;%d;%dm ",cor_tinta+30,cor_papel+40);
}

ficheiro *abrir(texto *files,texto *value){
	return fopen(files,value);
}

inteiro fechar(ficheiro *files){
	return fclose(files);
}

rotina gravar(ficheiro *files,texto *txt){
	fprintf(files,"%s\n",txt);
}


texto *ler(ficheiro *files){
	return fgets(texto_entrada,78,files);
}


texto *copia(texto *destino,texto *origem){
	return strcpy(destino,origem);
}

texto *acrescentar(texto *destino,texto *origem){
	return strcat(destino,origem);
}

texto *encher(texto *destino,texto t,inteiro tamanho){

	memset(destino,t,tamanho);
	destino[tamanho]=0;
	return destino;
}

texto *espaco(texto *destino,inteiro tamanho){
	return encher(destino,32,tamanho);
}

texto *em(texto *destino,texto *procurar){
    destino=strstr(destino,procurar);
    return destino;
}

inteiro loto(inteiro n){
    longo l;
    longo ll=RAND_MAX/n;
    l=random();;
    l= l / ll;
    return (inteiro) l;
}

