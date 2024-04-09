#include <stdio.h>



int main(void){

    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1)); // acessando um endereço de memoria e aumento um para chegar ao outro index
    printf("%c\n", *(s + 2));
}
