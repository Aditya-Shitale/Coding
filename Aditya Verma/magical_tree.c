// #include <stdio.h>
// #include <stdlib.h>

// /* Definition of a node in BST */
// struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// /* Function to create a new node */
// struct node *createNode(int data) {
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// /* Function to insert a new node in BST */
// struct node *insert(struct node *root, int data) {
//     if (root == NULL) {
//         return createNode(data);
//     } else if (data < root->data) {
//         root->left = insert(root->left, data);
//     } else if (data > root->data) {
//         root->right = insert(root->right, data);
//     }
//     return root;
// }

// /* Function to print the BST in-order traversal */
// void inorderTraversal(struct node *root) {
//     if (root != NULL) {
//         inorderTraversal(root->left);
//         printf("%d ", root->data);
//         inorderTraversal(root->right);
//     }
// }
// // Function to traverse the binary search tree in spiral order and print the node values
// void printSpiral(struct node* root) {
//     if (root == NULL) {
//         return;
//     }
//     // Use two stacks to traverse the tree in spiral order
//     struct node* stack1[10000];
//     struct node* stack2[10000];
//     int top1 = -1;
//     int top2 = -1;
//     // Push the root node to the first stack
//     stack1[++top1] = root;
//     // Traverse the tree in spiral order
//     while (top1 >= 0 || top2 >= 0) {
//         // Print the nodes in the first stack from right to left
//         while (top1 >= 0) {
//             struct node* curr = stack1[top1--];
//             printf("%d ", curr->data);
//             // Push the child nodes to the second stack from right to left
//             if (curr->right != NULL) {
//                 stack2[++top2] = curr->right;
//             }
//             if (curr->left != NULL) {
//                 stack2[++top2] = curr->left;
//             }
//         }
//         // Print the nodes in the second stack from left to right
//         while (top2 >= 0) {
//             struct node* curr = stack2[top2--];
//             printf("%d ", curr->data);
//             // Push the child nodes to the first stack from left to right
//             if (curr->left != NULL) {
//                 stack1[++top1] = curr->left;
//             }
//             if (curr->right != NULL) {
//                 stack1[++top1] = curr->right;
//             }
//         }
//     }
// }



// int height(struct node *root) {
//     if (root == NULL) {
//         return 0;
//     } else {
//         int left_height = height(root->left);
//         int right_height = height(root->right);

//         if (left_height > right_height) {
//             return (left_height + 1);
//         } else {
//             return (right_height + 1);
//         }
//     }
// }

// void print_left_bst_height(struct node *root) {
//     if (root != NULL) {
//         printf("Height of left BST with root %d: %d\n", root->data, height(root->left));
//     }
// }
// void print_right_bst_height(struct node *root) {
//     if (root != NULL) {
//         printf("Height of right BST with root %d: %d\n", root->data, height(root->right));
//     }
// }
// // Function to print nodes at a given level
// void printNodesAtLevel(struct node* root, int level) {
//     if (root == NULL)
//         return ;
//     if (level == 1)
//         printf("%d ", root->data);
//     else if (level > 1) {
//         printNodesAtLevel(root->left, level-1 );
//         printNodesAtLevel(root->right, level-1);
//     }
// }

// /* Main function */
// int main() {
//     struct node *root = NULL;
//     root = insert(root, 5);
//     insert(root, 3);
//     insert(root, 7);
//     insert(root, 4);
//     insert(root, 6);
//     insert(root, 8);
//     //insert(root, 80);

//     printf("Spiral traversal of BST: ");
//    // inorderTraversal(root);
//     printSpiral(root);

//     // Find the height of the right subtree of the root node
//    // int leftSubtreeHeight = findHeight(root->left);

//     // Print the result
//   //  printf("The height of the left subtree is %d\n", leftSubtreeHeight);


//     // Find the height of the right subtree of the root node
//    // int rightSubtreeHeight = findRHeight(root->right);

//     // Print the result
//    // printf("The height of the right subtree is %d\n", rightSubtreeHeight);
//    // printf("the max distance between spells is %d",leftSubtreeHeight+rightSubtreeHeight);
   
//    print_left_bst_height(root);
//    print_right_bst_height(root);
//     int level = 2; // Level to print
//     int level1=level+1;
//     printf("Nodes at level %d: ", level);
//     printNodesAtLevel(root, level1);
// }
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary search tree node
typedef struct bstnode {
    int data;
    struct bstnode *left;
    struct bstnode *right;
} BSTNode;

// Create a new node with the given data and NULL left and right pointers
BSTNode* createNode(int data) {
    BSTNode* newNode = (BSTNode*) malloc(sizeof(BSTNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a new node into the binary search tree
BSTNode* insertNode(BSTNode* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Print all nodes at the given level in the binary search tree
void printLevel(BSTNode* root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 0) {
        printf("%d ", root->data);
    } else {
        printLevel(root->left, level-1);
        printLevel(root->right, level-1);
    }
}

// Driver program to test the above functions
int main() {
    BSTNode* root = NULL;
    int n, data, level;

    // Read the number of nodes in the binary search tree
    scanf("%d", &n);

    // Read the nodes and insert them into the binary search tree
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertNode(root, data);
    }

    // Read the level to be printed
    scanf("%d", &level);

    // Print all nodes at the given level
    printLevel(root, level);

    return 0;
}
