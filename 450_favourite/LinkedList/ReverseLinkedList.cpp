//reverse linked list

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data)           //struct constructor
    {
        this->data = data;
        next = NULL;
    }
    
};

class LinkedList{
    public:
    Node* head;
    
    LinkedList()         //constructor to make head NULL;
    {
        head = NULL;
    }
    
    
    void reverse()
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL)
        {
            next = curr ->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }


    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    
    }

    void print()
    {   Node* temp = head;
        while(temp != NULL)
         {
             cout<<temp->data<<" ";
             temp = temp -> next;
         }
     }
};

int main()
{
    LinkedList l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(3);
    l1.push(3);
    l1.push(3);
    l1.push(9);
    l1.push(8);
    l1.push(7);
   
    l1.print();
    cout<<endl;
    l1.reverse();
    l1.print();
    return 0;
    
}