#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class sstring{
public :
char *text;
sstring(char *s){
	size_t size=strlen(s)+4;
	text=(char*)(malloc(size));
	strcpy(text,s);
}
void strset(char *s){
	char *ss;
	size_t size=strlen(s)+4;
	text=(char*)realloc(text,size);
	strcpy(text,s);
}
void strcats(char *s){
	size_t size=strlen(text)+4+strlen(s)+4;
	text=(char*)(realloc(text,size));
	strcat(text,s);
}
void strappend(size_t pos,char *s){
	char *ss;
	char *s1;
	char *s2;
	size_t size=strlen(text)+4+strlen(s)+8;
	size_t size2=strlen(text)-pos+4;
	s1=(char*)(malloc(size2));
	s2=text+pos;
	strcpy(s1,s2);
	text=(char*)(realloc(text,size));
	s2=text+pos;
	s2[0]=0;
	strcat(text,s);
	strcat(text,s1);
	free(s1);
}


};



int main(){
	sstring *s;
	s=new sstring((char*)"hello world");
	printf("%s\n",s->text);
	s->strset((char*)"hello world... hi");
	printf("%s\n",s->text);
	s->strcats((char*)"---hi there...");
	printf("%s\n",s->text);
	s->strappend(5,(char*)"<--------append-------->");
	printf("%s\n",s->text);
	return 0;
}
