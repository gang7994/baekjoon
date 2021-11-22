#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    struct Node *llink;
    struct Node *rlink;
    int data;
} NODE;

NODE *makenode(int n);
void push_front(NODE **dq, int n);
void push_back(NODE **dq, int n);
int pop_front(NODE **dq);
int pop_back(NODE **dq);
int empty(NODE **dq);
int front(NODE **dq);
int back(NODE **dq);

int size = 0;

int main(void) {
    NODE *dq = NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        char command[11];
        scanf("%s",command);
        if(strcmp(command,"push_front")==0) {
            int temp;
            scanf("%d",&temp);
            push_front(&dq, temp);
        }
        else if(strcmp(command,"push_back")==0) {
            int temp;
            scanf("%d",&temp);
            push_back(&dq, temp);
        }
        else if(strcmp(command,"pop_front")==0) {
            printf("%d\n", pop_front(&dq));
        }
        else if(strcmp(command,"pop_back")==0) {
            printf("%d\n", pop_back(&dq));
        }
        else if(strcmp(command,"size")==0) {
            printf("%d\n", size);
        }
        else if(strcmp(command,"empty")==0) {
            printf("%d\n", empty(&dq));
        }
        else if(strcmp(command,"front")==0) {
            printf("%d\n", front(&dq));
        }
        else if(strcmp(command,"back")==0) {
            printf("%d\n", back(&dq));
        }
    }
}

NODE *makenode(int n) {
    NODE *newnode = malloc(sizeof(NODE));
    newnode->data = n;
    newnode->llink = NULL;
    newnode->rlink = NULL;
    return newnode;
}

void push_front(NODE **dq, int n) {
    NODE *newnode = makenode(n);
    if(*dq == NULL) *dq = newnode;
    else {
        newnode->rlink = *dq;
        (*dq)->llink = newnode;
        *dq = newnode;
    }
    size++;
}

void push_back(NODE **dq, int n) {
    NODE *newnode = makenode(n);
    if(*dq ==NULL) *dq = newnode;
    else {
        NODE *tail = *dq;
        while(tail->rlink != NULL) tail = tail->rlink;
        newnode->llink = tail;
        tail->rlink = newnode;
    }
    size++;
}

int pop_front(NODE **dq) {
    if(empty(dq)) return -1;
    else {
        NODE *temp = *dq;
        if(temp->rlink !=NULL) {
            *dq = temp->rlink;
            NODE *h = *dq;
            h->llink =NULL;
        }
        else *dq = NULL;
        int data = temp->data;
        free(temp);
        size--;
        return data;
    }
}

int pop_back(NODE **dq) {
    if(empty(dq)) {
        return -1;
    }
    else { 
        NODE *temp = *dq;
        while(temp->rlink != NULL) temp = temp->rlink;
        int data = temp->data;
        if(temp->llink ==NULL && temp->rlink ==NULL) *dq = NULL;
        else temp->llink->rlink = NULL;
        free(temp);
        size--;
        return data;
    }
}

int front(NODE **dq) {
    if(empty(dq)) return -1;
    else return (*dq)->data;
}
int back(NODE **dq) {
    if(empty(dq)) return -1;
    else {
        NODE *temp = *dq;
        while(temp->rlink != NULL) temp = temp->rlink;
        return temp->data;
    }
}

int empty(NODE **dq) {
    if(*dq == NULL) return 1;
    else return 0;
}