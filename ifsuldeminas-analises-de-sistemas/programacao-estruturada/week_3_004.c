/* 4. Qual é o valor de x e de y no final da execução do programa?
    main (){
    int y = 4, x = 2;
    if (y > 5)
        y = 3 * y;
    y = y + 1;
    if (y > 4){
        y++; x++;
        }
    else x = x + 2;
    y = y + 3;
    x++;
    } */

// farei a analise de cabeça, sem usar o compilador.

/*
main (){
    int y = 4, x = 2;
    if (y > 5)  //y = 4, não entra nesse bloco
        y = 3 * y;
    y = y + 1; //agora y= 5
    if (y > 4){ // entra nesse bloco
        y++; x++; //y = 6 e x = 3
        }
    else x = x + 2; //ignorado, pois entrou no bloco acima
    y = y + 3; //agora soma y = 6 + 3, y = 9
    x++; //incrementa x, fica x = 4
    }

    //resultado:
    //y = 9 e x = 4

*/
