#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int number;
    struct node *right;
    struct node *left;
    
}node;

node *createNode(int value){
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        fprintf(stderr, "Erro ao alocar memória");
        exit(EXIT_FAILURE);
    }
    newNode->number = value;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;

}


node *insert(node *tree, int value){
    if(tree == NULL){
        return createNode(value);
    }
    if(value > tree->number){
        tree->right = insert(tree->right, value);
    }
    if(value < tree->number){
        tree->left = insert(tree->left, value);
    }
}


void print(node *tree){
    if(tree != NULL){
        print(tree->left);
        printf("%d ", tree->number);
        print(tree->right);
    }
}


int main(){

    node *tree = NULL;
    tree = insert(tree, 50);
    tree = insert(tree, 20);
    tree = insert(tree, 70);
    tree = insert(tree, 80);
    tree = insert(tree, 90);
    tree = insert(tree, 200);

    print(tree);


}
