#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strnew(char *s){
	char *ss;
	size_t size=strlen(s)+4;
	ss=malloc(size);
	strcpy(ss,s);
	return ss;
}
char *strset(char *s,char *sss){
	char *ss;
	size_t size=strlen(sss)+4;
	ss=realloc(s,size);
	strcpy(ss,sss);
	return ss;
}
char *strcats(char *s,char *sss){
	char *ss;
	size_t size=strlen(s)+4+strlen(sss)+4;
	ss=realloc(s,size);
	strcat(ss,sss);
	return ss;
}
char *dfill(int size,char *s){
	int i=0;
	char *ss;
	size_t size2=(size_t)(1+size)*strlen(s)+4;
	ss=malloc(size2);
	strcpy(ss,s);
	for(i=0;i<size;i++){	
		strcat(ss,s);
	}
	return ss;
}


int main(){
	char *s;
	char *ss;
	s=strnew("hello world...");
	printf("%s\n",s);
	ss=dfill(32,"-");
	s=strcats(s,ss);
	s=strcats(s,">|");
	printf("%s\n",s);
	free(ss);
	free(s);
	return 0;
}
