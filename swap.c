#include <stdio.h>


void swap(int *a,  int *b);

int main(void){
        int a = 70;
        int b = 80;
        printf("a: %i and b: %i\n", a,b);

        swap(&a, &b);

        printf("a: %i and b: %i", a,b);
}



void swap(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;
}