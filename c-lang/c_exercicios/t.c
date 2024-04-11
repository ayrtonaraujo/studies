
#include <stdio.h>
#include <stdlib.h>

void mostraHora(int h, int m, int s);
void delay();

int h = 0, m = 0, s = 0;

int main(){

    while(1){

        mostraHora(h,m,s);
    }

    return 0;
}

void mostraHora(int h, int m, int s){

    for(int i = 0; i < 60; i++){
        s += 1;
        if(s == 60){
            m += 1;
            s = 0;
        }
        if(m == 60){
            h += 1;
            m = 0;
        }
        if(h == 24){
            h = 0;
        }

    printf("\n\t  TIMER\n");
    printf("\n\t%.2d:%.2d:%.2d", h, m, s);
    delay();
    system("cls");
    }    
}

void delay(){
    for(long long int i = 0; i < 9999; i++){
        for(long long int j = 0; j < 9999; j++);
    }
    for(long long int i = 0; i < 9999; i++){
        for(long long int j = 0; j < 9999; j++);
    }
    for(long long int i = 0; i < 9999; i++){
        for(long long int j = 0; j < 9999; j++);
    }
    for(long long int i = 0; i < 9999; i++){
        for(long long int j = 0; j < 9999; j++);
    }
}