#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * left;
    struct node * right;
} node;

// Create a tree node
node* create_node(int value) {
    node* result = malloc(sizeof(node));

    if(result != NULL) {
        result->value = value;
        result->left = NULL;
        result->right = NULL;
    }

    return result;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}