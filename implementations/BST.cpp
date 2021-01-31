#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct BSTnode{
    int data;
    BSTnode* left;
    BSTnode* right;
};

BSTnode* GetNewNode(int data)
{
    BSTnode* newNode = new BSTnode();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}


BSTnode* Insert(BSTnode* root,int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else if(data >= root->data)
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BSTnode* root, int data)
{
    if(root == NULL)               return false;
    else if(root->data == data)    return true;
    else if(data <= root->data)    return Search(root->left,data);
    else if(data >= root->data)    return Search(root->right,data);
    
}

int main()
{
    BSTnode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,5);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    int no;
    //cout<<"enter a number \n";
    cin>>no; 
    if(Search(root,no)==true)
    {
       cout<<"found"<<"\n";  
    }
    else
    {
        cout<<"not found\n";
    }
    return 0;
}









