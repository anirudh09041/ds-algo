#include<stdio.h>
struct ArrayQueue
{
 int front,rear;
 int capacity;
 int* array;
};
struct ArrayQueue* createQueue(int capacity)
{
    struct ArrayQueue* Q=malloc(sizeof(struct ArrayQueue));
    Q->capacity=capacity;
    Q->front=Q->rear=-1;
    Q->array=malloc(Q->capacity*sizeof(int));
    return Q;
}
int isEmpty(struct ArrayQueue* Q)
{
    return(Q->front==-1);
}
int isFull(struct ArrayQueue* Q)
{
    return((Q->rear+1)%Q->capacity==Q->front);
}
int size()
{
   return((Q->capacity-Q->front+Q->rear+1)%Q->capacity);
}
void insert(struct ArrayQueue* Q,int data)
{
    Q->rear=(Q->rear+1)%Q->capacity;
    Q->array[Q->rear]=data;
    if(Q->front==-1)
    Q->front=Q->rear;

}