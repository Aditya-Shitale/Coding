// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int data;
//     struct node* left;
//     struct node* right;
// } node;
// node* stackfinal[10000];
// int siz=1;
// node* createNode(int data) {
//     node* newNode = (node*)malloc(sizeof(node));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }
// node* insert(node* root, int data) {
//     if (root == NULL) return createNode(data);

//     if (data < root->data)
//         root->left = insert(root->left, data);
//     else if (data > root->data)
//         root->right = insert(root->right, data);

//     return root;
// }


// int getHeight(node* root) {
//     if (root == NULL) return 0;

//     int leftHeight = getHeight(root->left);
//     int rightHeight = getHeight(root->right);

//     if (leftHeight > rightHeight)
//         return leftHeight + 1;
//     else
//         return rightHeight + 1;
// }

// void printSpiral( int nodeData, node* stack[],int m,int right) {
//     m--;
//     if(stack[m]==NULL)return;
//     node* stacki[10000];
//       for(int i=0;i<10000;i++)
//     {
//         stacki[i]=NULL;
//     }
//     int i=0;
//     if(right)
//     {
//         while(m>=0)
//         {
//             if(stack[m]->right != NULL)
//             {
//                 printf("%d ",((stack[m]->right->data)));
//                 stacki[i]=stack[m]->right;
//                 i++;

//             }
//              if(stack[m]->left != NULL)
//             {
//                 printf("%d ",((stack[m]->left)->data));
//                 stacki[i]=stack[m]->left;
//                 i++;

//             }
//              m--;

//         }
//     }
//     else
//     {
//         while(m>=0)
//         {
//             if(stack[m]->left != NULL)
//             {
//                 printf("%d ",((stack[m]->left)->data));
//                 stacki[i]=stack[m]->left;
//                 i++;

//             }
//              if(stack[m]->right != NULL)
//             {
//                 printf("%d ",(stack[m]->right)->data);
//                 stacki[i]=stack[m]->right;
//                 i++;

//             }
//             m--;

//         }
//     }
//     for(int j=0;j<i;j++)
//     {
//         stackfinal[siz]=stacki[j];
//         siz++;
//     }
//     // printf("\n");
//     printSpiral( nodeData, stacki, i, (right+1)%2);


// }


// int order[10000][10000];
// int or=0;

// void printLevelOrder( node* root) {
//     if (root == NULL) {
//         return;
//     }

//      node** queue = (node**)malloc(sizeof(node*) * 10000);
//     int front = 0, rear = 0;
//     queue[rear++] = root;

// int p=0;
//     while (front < rear) {
//         node* curr = queue[front++];
//         order[or][p]=curr->data;
//         p++;
//         // printf("%d ", curr->data);

//         if (curr->left != NULL) {
//             queue[rear++] = curr->left;
//         }

//         if (curr->right != NULL) {
//             queue[rear++] = curr->right;
//         }
//     }
//     or++;

//     free(queue);
// }

// // Print all nodes at the given level in the binary search tree
// void printLevel(node* root, int level,int h) {
//     if (root == NULL) {
//         return;
//     }
//     if (level == 0) {
//         printf("%d ", root->data);
//     }else if(level<0||level>=h){
//         printf("-1 ");
//     }
//      else {
//         printLevel(root->left, level-1,h);
//         printLevel(root->right, level-1,h);
//     }
// }
// int maxDepth(node* node) {
//     if (node == NULL) return 0;
//     int leftDepth = maxDepth(node->left);
//     int rightDepth = maxDepth(node->right);
//     return (leftDepth > rightDepth) ? leftDepth + 1 : rightDepth + 1;
// }
// int maxDistance(node* root) {
//     if (root == NULL) return 0;
//     int leftMax = maxDistance(root->left);
//     int rightMax = maxDistance(root->right);
//     int leftDepth = maxDepth(root->left);
//     int rightDepth = maxDepth(root->right);
//     return (leftMax > rightMax && leftMax > leftDepth + rightDepth) ? leftMax : (rightMax > leftMax && rightMax > leftDepth + rightDepth) ? rightMax : leftDepth + rightDepth;
// }

// int main() {
//     int n, i, data, nodeData, requestedLevelsCount,level,levelno;
//     node* root = NULL;
// //Takes input for no. of nodes
//     scanf("%d", &n);
// //Takes input for all nodes and insert in bst
//     for (i = 0; i < n; i++) {
//         scanf("%d ", &data);
//         root = insert(root, data);
//     }
// //Prints spiral order of given tree
//     node* stack[100];
//     for(int i=0;i<100;i++)
//     {
//         stack[i]=NULL;
//     }
//     stack[0]=root;
//     //take input of node whose spiral successor needs to be printed
//     scanf("%d", &nodeData);
//     stackfinal[0]=root;



// // printLevelOrder(root);
//     int requestedLevels[n];
//     //
//     scanf("%d", &requestedLevelsCount);

//     for (i = 0; i < requestedLevelsCount; i++) {
// scanf("%d", &requestedLevels[i]);
// }
// int hei=getHeight(root);
// //prints spiral order
//     printf("%d ",root->data); 
//     printSpiral(nodeData,stack,1,0);
//     printf("\n");

// //prints spiral successor of given node
//     int ans=-1;
//     for(int j=0;j<siz;j++)
//     {
//         if(nodeData==stackfinal[j]->data){
//             ans=j+1;
//         }
        
//     }
//     if(ans==siz){
//         printf("-1\n");
//     }
//     else if(ans==-1){
//         printf("-1\n");
//     }
//     else{
//         printf("%d ",stackfinal[ans]->data);
//     }
//     printf("\n");

// //prints maximum distnce between two nodes in bst
// // int k=getHeight(root->left)+getHeight(root->right);
// // printf("%d ",k);
// printf("%d ",maxDistance(root));
// printf("\n");

// //prints level according to query
//  for(int r=0;r<requestedLevelsCount;r++){
//  printLevel(root, requestedLevels[r],hei);
//  }
// printf("\n");
//  printLevelOrder(root);

// //  printf("%d ",hei);

// return 0;
// }

#include<stdio.h>
#include<limits.h>
#define MAX 100000

int main()
{
    int n,k,seats[MAX],i,j,temp,sum=0,min_distance=INT_MAX;

    printf("Enter the number of seats: ");
    scanf("%d",&n);

    printf("Enter the number of students: ");
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        printf("Enter the seat for student %d: ",i+1);
        scanf("%d",&seats[i]);

        for(j=0;j<i;j++)
        {
            int distance=seats[i]-seats[j];
            if(distance<0)
            {
                distance=-distance;
            }

            if(distance<min_distance)
            {
                min_distance=distance;
            }
        }

        if(min_distance==INT_MAX)
        {
            min_distance=0;
        }

        sum=sum+seats[i];
        min_distance=INT_MAX;
    }

    printf("The sum of seats is %d\n",sum);
    return 0;
}
