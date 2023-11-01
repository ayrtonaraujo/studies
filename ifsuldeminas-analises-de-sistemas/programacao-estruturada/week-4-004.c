/* 4. Quais são os valores de x e y no final da execução do programa ?
    main(){
    float x = 5, y = 2;
    if ((x < 6) && (y < x)) {
        x++; y++;
    }
    else x = x + 2;
    y = y + 3;
    if (x == y) x++;
    else y--;
    if ((x < 10) && (y > 8))
    x--;
    else y--;
    } */

main(){
    float x = 5, y = 2; 
    if ((x < 6) && (y < x)) { //condicao y < x TRUE e x > 6 TRUE
        x++; y++; //x = 6, y = 3
    }
    else x = x + 2; // nao entra
    y = y + 3; // y = 6
    if (x == y) x++; //y = 6, x = 7
    else y--; // ignora
    if ((x < 10) && (y > 8)) //ignora
    x--; //ignora
    else y--; //TRUE
    }

    //RESULTADO: y = 5, x = 7