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


int main(){
	char *s;
	s=strnew("hello world...");
	printf("%s\n",s);
	s=strset(s,"hello world...hi");
	printf("%s\n",s);
	s=strcats(s," ther hi...");
	printf("%s\n",s);
	return 0;
}
