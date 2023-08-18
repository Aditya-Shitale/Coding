#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newnode(int data){
    node *temp =new node();
    temp->data =data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void printInorder(node *node){
    if(node==NULL)return;

    printInorder(node->left);

    cout<<node->data<<" ";

    printInorder(node->right);

}

int main(){
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);

    printInorder(root);
    
    return 0;
}