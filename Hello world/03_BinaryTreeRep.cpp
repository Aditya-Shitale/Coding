#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newnode(int data){
  node* element = new node();
  element->data=data;
  element->left=NULL;
  element->right=NULL;
  return element;

}
void printNode(node* n){
    cout<<&n<<" ";
    while(n->left!=NULL&&n->right!=NULL){
        cout<<n->left->data<<" "<<n->right->data;
        n=n->left;
    }
    cout<<endl;
}




int main(){
    
node* root= newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);
root->right->right=newnode(7);
root->right->left=newnode(6);

printNode(root);

    return 0;
}