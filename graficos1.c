#include "graficos.h"

numero x=0.00;
numero y=0.00;
funcao desenhar(mecanismo *giringonca,desenho *desenho1,pontos apontador1);
funcao relogio(pontos apontador1);
funcao tecla(mecanismo *geringoca,eventos *evento1, pontos apontador1);
funcao rato(mecanismo *geringoca,erato *evento1, pontos apontador1);
rotina saida();

inteiro comecar(){
    texto titulo1[]="ola mundo";
    titulos=titulo1;
    orelogio=relogio;
    otecla=tecla;
    orato=rato;
    desenhando=desenhar;
    saindo=saida;
    iniciar();
}

rotina saida(){
    fim();
}

funcao desenhar(mecanismo *giringonca,desenho *desenho1,pontos apontador1){

    lapis(desenho1,0.0,0.0,0.0);

    rectangulo(desenho1,x,y,100.00,100.00);
    preservar(desenho1);
    preechimento(desenho1);


    retornar falso;

}



funcao relogio(pontos apontador1){
    x=x+1.00;
    y=y+1.00;
    if (x>300 || y>300){
        x=0.00;
        y=x;
    }
    redesenhar(esquema,0.00,0.00,largura,altura);
    retornar verdadeiro;
}


funcao tecla(mecanismo *geringoca,eventos *evento1, pontos apontador1){
    formato("tecla primida,%c\n",evento1->primida);
    retornar falso;
}


funcao rato(mecanismo *geringoca,erato *evento1, pontos apontador1){
    inteiro x1=evento1->x;
    inteiro y1=evento1->y;
formato("rato primida x y ,%d,%d\n",x1,y1);
    retornar verdadeiro;
}
