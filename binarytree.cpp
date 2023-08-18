#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
 
    // val is the key or the value that
    // has to be added to the data part
    Node(int val)
    {
        data = val;
 
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};
 
int main()
{
 
    /*create root*/
    struct Node* root = new Node(1);
    /* following is the tree after above statement
 
             1
            / \
          NULL NULL
    */
 
    root->left = new Node(2);
    root->right = new Node(3);
    /* 2 and 3 become left and right children of 1
                    1
                  /    \
                 2       3
               /  \     /  \
            NULL NULL  NULL NULL
    */
 
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    /* 4 becomes left child of 2
               1
            /     \
           2       3
          / \     / \
         4   5 NULL NULL
        / \
     NULL NULL
    */

    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);

    /* 8 and 9 becomes left and right child of 4 respectively
               1
            /     \
           2       3
          / \     / \
         4   5 NULL NULL
        / \
       8   9
    */
    root->right->left = new Node(6);
    root->right->right = new Node(7);
/* 6 and 7 becomes left and right child of 3
               1
            /     \
           2       3
          / \     / \
         4   5    6  7
        / \
       8   9
    */

   printf("here it is", val);
 
    return 0;
}