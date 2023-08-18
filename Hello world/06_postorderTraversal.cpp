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

void printPreorder(node *node){
    if(node==NULL)return;

    printPreorder(node->left);


    printPreorder(node->right);
    cout<<node->data<<" ";

}

int main(){
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    /*  
             1
            /  \
           2    3
          /  \
         4    5     
    
    */

    printPreorder(root);
    
    return 0;
}