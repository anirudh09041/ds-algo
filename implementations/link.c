#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype{
    int data;                            //nptel 
   struct nodetype* next;
}node;
typedef node* list;
void main()
{ list head,temp;
char ch;
int n;
head=NULL;
printf("enter data? (y/n) \n");
scanf("%c",&ch);
fflush(stdin);
while(ch=='y'||ch=='Y')
{ printf("give data:\n");
scanf("%d",&n);
temp=(list)malloc(sizeof(node));
temp->data=n;
temp->next=head;
printf("enter more data? (y/n) \n");
scanf("\n%d",&ch);
fflush(stdin);
}
temp=head;
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}     
}
