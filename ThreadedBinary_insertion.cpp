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

void insertion(node *root, ll data){
    if(data < root->data){
        if(root->left != NULL){
            insertion(root->left, data);
        }
        else{
            node *newNode = new node();
            newNode->data = data;
            newNode->inSuccessor = false;
            root->left = newNode;
            return;
        }
    }
    else{
        if(root->right != NULL){
            insertion(root->right, data);
        }
        else{
            node *newNode = new node();
            newNode->data = data;
            newNode->inSuccessor = false;
            root->right = newNode;
            return;
        }
    }
}

int main(){
    ll t, i, j, n, el;
    cin >> n;
    
    ll inorder[n];
    for (i = 0; i < n; i++){
        cin >> inorder[i];
    }

    ll insertData;
    cin >> insertData;

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

    insertion(root, insertData);
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