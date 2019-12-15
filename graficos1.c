#include "graficos.h"

funcao desenhar(mecanismo *giringonca,desenho *desenho1,pontos apontador1);
funcao relogio(pontos apontador1);
funcao tecla(mecanismo geringoca,eventos evento1, pontos apontador1);
rotina saida();

inteiro comecar(){
    texto titulo1[]="ola mundo";
    titulos=titulo1;
    desenhando=desenhar;
    saindo=saida;
    iniciar();
}

rotina saida(){
    fim();
}

funcao desenhar(mecanismo *giringonca,desenho *desenho1,pontos apontador1){

    lapis(desenho1,0.0,0.0,0.0);

    rectangulo(desenho1,10.0,10.0,100.00,100.00);
    preservar(desenho1);
    preechimento(desenho1);


    retornar falso;

}
