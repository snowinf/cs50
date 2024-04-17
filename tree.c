#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *rigth;
    
    
}node;


bool search(node *tree, int number);
node *createNode(int value){
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL){
        return 1;
    }
    newNode->number = value;
    newNode->left = NULL;
    newNode->rigth = NULL;
    return newNode;
}

node *insert(node *root, int value){
    if (root == NULL){
        createNode(value);
    }
    if (value < root->number)
    {
        root->left = insert(root->left, value);
    }
    if(value > root->number){
        root->rigth =  insert(root->rigth, value);
    }
    return root;
    
}
int main(int argc,char *argv[]){



}




bool search(node *tree, int number){


}
