#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct node{
    int data;
    struct node *left, *right;
    bool inSuccessor;
} node;

node *makeThreads(node *root){
    if(root == NULL){
        return NULL;
    }    
    if(root->left == NULL && root->right == NULL){
        return root;
    }    
 
    if(root->left != NULL){
        node* lft = makeThreads(root->left);
        lft->right = root;
        lft->inSuccessor = true;
    }
 
    if(root->right == NULL){
        return root;
    }    
 
    return makeThreads(root->right);
}

node *leftMost(node *root){
    if(root == NULL){
        return root;
    }

    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

node *deleteNode(node *root, ll data){
    if(root == NULL){
        return root;
    }    

    if(data < root->data){
        root->left = deleteNode(root->left, data);
    }
    
    else if(data > root->data){
        root->right = deleteNode(root->right, data);
    }
    
    else{

        if(root->left==NULL and root->right==NULL){
            return NULL;
        }   
        else if(root->left == NULL) {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node *temp = root->left;
            free(root);
            return temp;
        }
 
        
        node *temp = leftMost(root->right);
        root->data = temp->data; 
        root->right = deleteNode(root->right, temp->data);
    }
}


int main(){
    ll t, i, j, n, el;
    cin >> n;
    
    ll inorder[n];
    for (i = 0; i < n; i++){
        cin >> inorder[i];
    }

    ll deleteData;
    cin >> deleteData;

    node *root = new node();
    root->data = inorder[n / 2];
    node *trav = root;

    for (i = (n / 2) - 1; i >= 0; i--){
        node *newNode = new node();
        newNode->data = inorder[i];
        newNode->inSuccessor = false;
        trav->left = newNode;
        trav = trav->left;
    }
    
    trav = root;
    for (i = (n / 2) + 1; i < n; i++){
        node *newNode = new node();
        newNode->data = inorder[i];
        newNode->inSuccessor = false;
        trav->right = newNode;
        trav = trav->right;
    }

    deleteNode(root, deleteData);
    makeThreads(root);
    
    node* curr = leftMost(root);
    while (curr != NULL) {
        cout << curr->data << " ";
        if (curr->inSuccessor){
            curr = curr->right;
        }
        else{
            curr = leftMost(curr->right);
        }    
    }

    return 0;
}