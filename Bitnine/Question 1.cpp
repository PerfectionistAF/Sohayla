#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef enum TypeTag{
    ADD,
    SUB,
    MUL,
    DIV,
    FIBO,
    RW //read-write value set to memory of Node due to segmentation error
} TypeTag;

typedef struct Node
{
    TypeTag type;
    int nodeValue;
    struct Node *right;
    struct Node *left;
} Node;

#define MAX 100
int f[MAX];

Node* makeFunc(TypeTag type)
{
    Node* nodeNew = (Node*)malloc(sizeof(Node));
    nodeNew->type = type;
    nodeNew->right = NULL;
    nodeNew->left = NULL;
    return nodeNew;
}

Node* makeVal(int value) {
      Node* nodeNew = makeFunc(RW);
      nodeNew->nodeValue = value;
      return nodeNew;
}

int fib(int n)
{
    //int fibsize = n+1;
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int calc(Node* node)
{
    //node = (Node*)malloc(sizeof(Node));
    if(node->type == ADD){
        //cout<<"Node addition operation:\n";
        return calc(node->left) + calc(node->right);
    }
    else if(node->type == SUB){
        //cout<<"Node subtraction operation:\n";
        return calc(node->left) - calc(node->right);
    }
    else if(node->type == MUL){
        //cout<<"Node multiplication operation:\n";
        return calc(node->left) * calc(node->right);
    }
    else if(node->type == DIV){
        //cout<<"Node division operation:\n";
        return (float)(calc(node->left) / calc(node->right));
    }
    else if(node->type ==FIBO){
        //cout<<"Node fibonacci operation:\n";
        return fib(calc(node->left));
    }
    else if (node->type == RW) {
        //cout<<"node value is set\n";
        return node->nodeValue;
    }
    exit(1);
}

int main()
{
    //ptr to function
    //Node* (*makeFunc_ptr)(TypeTag) = makeFunc;
    //Node* (*makeVal_ptr)(int) = makeVal;
    for (int i = 0; i < MAX; i++) {
        f[i] = -1;
    }
    printf("Hello\n");
    Node *add = makeFunc(ADD);//,(add->right->nodeValue = 10, add->left->nodeValue = 10));
    add->left = makeVal(10);
    add->right = makeVal(6);
    Node *mul = makeFunc(MUL);
    mul->left = makeVal(5);
    mul->right = makeVal(4);
    Node *sub = makeFunc(SUB);
    sub->left= makeVal(calc(add));
    sub->right= makeVal(calc(mul));
    Node *fibo = makeFunc(FIBO);
    fibo->left= makeVal(abs(calc(sub)));
    fibo->nodeValue = fib(calc(fibo->left));

    printf("addition operation : %d\n", calc(add));
    printf("multiplication operation : %d\n", calc(mul));
    printf("subtraction operation : %d\n", calc(sub));
    printf("fibonacci : %d\n", calc(fibo));
    printf("Done\n");
    free(add);
    free(sub);
    free(mul);
    free(fibo);
    //return 0;
}

