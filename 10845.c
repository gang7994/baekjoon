#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    struct NODE *link;
    int data;
} NODE;

typedef struct Queue {
    NODE *front;
    NODE *rear;
} Queue;

void init(Queue *q);
void push(Queue *q, int n);
int pop(Queue *q);
int size(Queue *q);
int empty(Queue *q);
int front(Queue *q);
int back(Queue *q);

int main(void) {
    Queue *q = malloc(sizeof(Queue));
    init(q);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        char command[6];
        scanf("%s",command);
        if(strcmp(command,"push")==0) {
            int temp;
            scanf("%d",&temp);
            push(q, temp);
        }
        else if(strcmp(command,"pop")==0) {
            printf("%d\n", pop(q));
        }
        else if(strcmp(command,"size")==0) {
            printf("%d\n", size(q));
        }
        else if(strcmp(command,"empty")==0) {
            printf("%d\n", empty(q));
        }
        else if(strcmp(command,"front")==0) {
            printf("%d\n", front(q));
        }
        else if(strcmp(command,"back")==0) {
            printf("%d\n", back(q));
        }
    }

}

void init(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

int empty(Queue *q) {
    if(q->front == NULL) return 1;
    else return 0;
}

void push(Queue *q, int data) {
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->link = NULL;
    if(empty(q)) {
        q->front = new;
        q->rear = new;  
    }
    else {
        q->rear->link = new;
        q->rear = new;   
    }
}

int pop(Queue *q) {
    NODE *remove = q->front;;
    int temp;
    if(empty(q)) return -1;
    else {
        temp = remove->data;
        q->front = q->front->link;
        if(q->front == NULL) q->rear = NULL;
        free(remove);
        return temp;
    }
}

int size(Queue *q) {
    int cnt=0;
    NODE *temp = q->front;
    while(temp != NULL){
        cnt++;
        temp = temp->link;
    }
    return cnt;
}

int front(Queue *q) {
    if(empty(q)) return -1;
    else {
        int temp;
        temp = q->front->data;
        return temp;
    }
}

int back(Queue *q) {
    if(empty(q)) return -1;
    else {
        int temp;
        temp = q->rear->data;
        return temp;
    }
}