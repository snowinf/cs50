#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



int main(void){

    char *s = "hi!";
    char *t = malloc(strlen(s) + 1); //Malloc acha um espaço na memoria do tamnho de s mais 1 para \0

    if(t == NULL){ // se o malloc não retornar nada, aborte o programa

        return 1;
    }


    for(int i =0, n = strlen(s); i <= n; i++){ // faz um loop dentro de s
        t[i] = s[i]; // copia os elementos de t para s

    }

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
}