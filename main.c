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

void printtree(node *root) {
    if(root == NULL) {
        printf(" ------ [ EMPTY ] ------ \n");
        return;
    }

    int value = root->value;

    printf(" [ NODE %d ]\n", value);

    if(root->left != NULL) {
        printf(" [ NODE %d ] has left ↓\n", value);
        printtree(root->left);
    }
    
    if(root->right != NULL) {
        printf(" [ NODE %d ] has right ↓\n", value);
        printtree(root->right);
    }
}

int main() {
    node* root = create_node(0);

    node* node_1 = create_node(1);
    node* node_2 = create_node(2);
    node* node_3 = create_node(3);
    node* node_4 = create_node(4);
    node* node_5 = create_node(5);
    node* node_6 = create_node(6);

    root->left = node_1;
    root->right = node_2;

    node_1->left = node_3;
    node_1->right = node_4;

    node_2->left = node_5;
    node_2->right = node_6;

    printf("Hello World!\n");

    // Examples
    printtree(root);

    // Clean memory
    free(root);
    free(node_1);
    free(node_2);
    free(node_3);
    free(node_4);
    free(node_5);
    free(node_6);

    return 0;
}