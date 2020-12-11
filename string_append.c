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
char *strappend(char *s,size_t pos,char *sss){
	char *ss;
	char *s1;
	char *s2;
	size_t size=strlen(s)+4+strlen(sss)+8;
	size_t size2=strlen(s)-pos+4;
	s1=malloc(size2);
	s2=s+pos;
	strcpy(s1,s2);
	ss=realloc(s,size);
	s2=ss+pos;
	s2[0]=0;
	strcat(ss,sss);
	strcat(ss,s1);
	free(s1);
	return ss;
}

int main(){
	char *s;
	s=strnew("hello world...");
	printf("%s\n",s);
	s=strappend(s,5," <--append---> ");
	printf("%s\n",s);
	return 0;
}
