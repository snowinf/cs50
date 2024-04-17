#include <stdio.h>
#include <stdlib.h>

typedef struct node // Criando uma estrutura node, com um numero e um ponteiro
{
    int number; // O valor a ser amarzenado dentro da estrutura
    struct node *next; // Ponteiro apontando para proximo elemento
}node;


int main(int argc, char *agrv[])
{

    //CRIANDO A LISTA
    node *list = NULL; // Cria uma lista apontando para NULL = NADA

    for(int i=1;i<argc; i++){ //Cria um loop entre todos os argumentos
        int number = atoi(agrv[i]); // Converte o que foi passa em argv em inteiro

        node *n = malloc(sizeof(node)); // Cria uma variavel node com um numero e um ponteiro, e cria um espaço na memoria para ela
        if(n == NULL){ //Se não for possivel criar o espaço ele aponta termina o programa
            return 1;
        }

        n->number = number; //Adiciona o argumento na variavel n
        n->next = NULL; // aponta next de n para NULL 
        
        if(list == NULL){ // Verifica se a lista esta vazia
          list = n; // se sim, adiciona n em list
        }
        else if(n->number < list->number){ //list sempre aponta pro primerio numero
          n->next = list; //next de n vai ser igual a list
          list = n;
        }

        else{
          
          for(node *ptr=list;ptr != NULL; ptr = ptr->next){ // Interaje entre os nodes
          //Cria uma varial temporaria de ptr, com o valor de list
         //Enquanto ptr não aponta para NULL, ele continua
        //Enquanto isso roda, ptr tem o valor de ptr->next ou seja o proximo node
            
              if(ptr->next == NULL){ //Quando o ptr for igual a NULL ele adiciona o endereço de n no ultimo elemento
                ptr->next = n;
                break;
              }
              
              if(n->number  < ptr->next->number){
                n->next = ptr->next;
                ptr->next = n;
                break;
              }
          }
        }
      
    }

    //PRINTANDO A LISTA
    node *ptr = list; // Um ponteiro que tem valor de list, para inicializar 
        while(ptr != NULL){
            printf("Number: %i\n", ptr->number); // Printa o valor de number
            printf("Next: %p\n", ptr->next); //Printa o valor da proxima
            ptr = ptr->next; // Coloca em ptr o endereço do proximo elemento
        }
}
