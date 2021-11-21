#include <stdio.h>
#include <stdlib.h>
 
typedef struct NODE {
    char data;
    struct Node *left, *right;
}NODE;
 
NODE *makenode(char data);
void preorder(NODE *tree);
void inorder(NODE *tree);
void postorder(NODE *tree);

int main() {
    NODE *tree[27];
    int n;
    char m, l, r, arr[81][2];
 
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf(" %c %c %c", &m, &l, &r);
        arr[i][0] = l;    arr[i][1] = r;
        tree[i] = makenode(m);
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][0] == tree[j]->data)
                tree[i]->left = tree[j];
            if (arr[i][1] == tree[j]->data)
                tree[i]->right = tree[j];
        }
    }
    preorder(tree[0]);
    printf("\n");
    inorder(tree[0]);
    printf("\n");
    postorder(tree[0]);

}

NODE *makenode(char data) {
    NODE *new = malloc(sizeof(NODE));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}
void preorder(NODE *tree) {
    if (tree != NULL) {
        printf("%c", tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
 
void inorder(NODE *tree) {
    if (tree != NULL) {
        inorder(tree->left);
        printf("%c", tree->data);
        inorder(tree->right);
    }
}
 
void postorder(NODE *tree) {
    if (tree != NULL) {
        postorder(tree->left);
        postorder(tree->right);
        printf("%c", tree->data);
    }
}