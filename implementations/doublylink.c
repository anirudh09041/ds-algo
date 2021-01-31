#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct  node* next; 
    
};
struct node* head;
struct node* getNewNode(int x)
{
 struct node* newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->prev=NULL;
 newnode->next=NULL;
 return newnode;
}

void insertNodeAtHead(int x)
{
struct node* temp= getNewNode(x);
if(head==NULL)
{
    head=temp;
}
else{
head->prev=temp;
temp->next=head;
head=temp;
}

}
