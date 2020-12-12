#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class sstring{
public :
char *text=NULL;
sstring(){
}
void report(){
	printf("%s\n",text);
}


sstring& operator =(char *s){
	text=s;
	return *this;
}
sstring& operator +(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(text)+4+strlen(s)+4;
	sss=text;
	ss=text+strlen(text)+2;
	if(text==NULL || ss[0]!='!'){
		text=(char*)(malloc(size));
		strcpy(text,sss);
	}else{
		text=(char*)(realloc(text,size));		
	}
	strcat(text,s);
	ss=text+strlen(text)+2;
	ss[0]='!';
	return *this;
}
sstring& operator +=(char *s){
	char *sss;
	char *ss;
	size_t size=strlen(text)+4+strlen(s)+4;
	sss=text;
	ss=text+strlen(text)+2;
	if(text==NULL || ss[0]!='!'){
		text=(char*)(malloc(size));
		strcpy(text,sss);
	}else{
		text=(char*)(realloc(text,size));		
	}
	strcat(text,s);
	ss=text+strlen(text)+2;
	ss[0]='!';
	return *this;
}


};



int main(){
	sstring s;
	s=(char*)"hello world";
	s.report();
	s=(char*)" hi ";
	s.report();	
	s=s+((char*)" there ");
	s.report();
	s+=((char*)" ....... ");
	s.report();
	return 0;
}
