#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class sstring{
public :
char *text=NULL;
bool b;
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
bool& operator ==(sstring s){
	b=(bool)(0==1);
	if(strcmp(text,s.text)==0)b=(bool)(0==0);
	return b;
}
bool& operator !=(sstring s){
	b=(bool)(0==1);
	if(strcmp(text,s.text)!=0)b=(bool)(0==0);
	return b;
}
bool& operator >(sstring s){
	b=(bool)(0==1);
	if(strcmp(text,s.text)>0)b=(bool)(0==0);
	return b;
}
bool& operator <(sstring s){
	b=(bool)(0==1);
	if(strcmp(text,s.text)<0)b=(bool)(0==0);
	return b;
}
};



int main(){
	sstring s;
	sstring ss;
	s=(char*)"hello world\n";
	ss=(char*)"hello world1\n";
	if(s>ss)printf("big\n");
	if(s<ss)printf("less\n");
	return 0;
}
