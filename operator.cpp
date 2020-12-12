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
sstring& operator +=(sstring& s){
	char *sss;
	char *ss;
	size_t size=strlen(text)+4+strlen(s.text)+4;
	sss=text;
	ss=text+strlen(text)+2;
	if(text==NULL || ss[0]!='!'){
		text=(char*)(malloc(size));
		strcpy(text,sss);
	}else{
		text=(char*)(realloc(text,size));		
	}
	strcat(text,s.text);
	ss=text+strlen(text)+2;
	ss[0]='!';
	return *this;
}

};



int main(){
	sstring s;
	sstring ss;
	sstring sss;
	s.text=(char*)("hello world");
	ss.text=(char*)(" hi ");
	sss.text=(char*)(" there ");
	s.report();
	s+=ss;
	s.report();
	s+=sss;
	s.report();

	return 0;
}
