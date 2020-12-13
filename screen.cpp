#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class scrs{
	protected:
	int w;
	int h;
	char *s;
	char *line;
	private:
	void fill(char *s,char *ss,int n){
		int i=0;
		strcpy(s,(char*)"");
		for(i=0;i<n-1;i++)strcat(s,ss);
	}
	public:
	scrs(int ww,int hh){
		w=ww;
		h=hh;
		s=(char*)(malloc(w*h+16));
		line=(char*)(malloc(w+16));
		cls();
	}
	void cls(){
		fill(line,(char*)" ",w);
		fill(s,(char*)line,h);
	}
	void printsc(int x,int y,char c){
		if (x>-1 && x<w && y>-1 && y<h && c>31)s[y*w+x]=c;
	}
	void printss(int x,int y,char *c){
		int xx=x;
		int yy=y;
		int i=0;
		for (i=0;i<strlen(c);i++){
			if (xx>w){
				xx=0;
				yy++;
			}
			printsc(xx,yy,c[i]);
			xx++;
		}
	}
	void report(){
		int i=0;
		char *ss=s;
		printf("\n\r");
		for(i=0;i<h;i++){
			strncpy(line,ss,w);
			line[w]=0;
			printf("%s\n\r",line);
			ss=s+w*i;
		}

	}
};

int main(){
	int i=0;
	scrs *scr;
	scr = new scrs(79,23);
	for(i=0;i<17;i++)scr->printss(i,i,(char*)"hello world\r\n");
	scr->report();
	return 0;
}