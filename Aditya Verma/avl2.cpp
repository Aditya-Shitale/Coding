#include <bits/stdc++.h>
using namespace std;
const long long MD = 1e9+7;
struct Node {
    pair<long long, long long> key;
    long long height;
    Node* left;
    Node* right;
    Node(pair<long long, long long> k) : key(k), height(1), left(nullptr), right(nullptr) {}
};

long long height(Node* node) {
    return node ? node->height : 0;
}

long long balanceFactor(Node* node) {
    return node ? height(node->left) - height(node->right) : 0;
}

void updateHeight(Node* node) {
    if (node) {
        node->height = max(height(node->left), height(node->right)) + 1;
    }
}

Node* rotateLeft(Node* node) {
    Node* rightChild = node->right;
    node->right = rightChild->left;
    rightChild->left = node;
    updateHeight(node);
    updateHeight(rightChild);
    return rightChild;
}

Node* rotateRight(Node* node) {
    Node* leftChild = node->left;
    node->left = leftChild->right;
    leftChild->right = node;
    updateHeight(node);
    updateHeight(leftChild);
    return leftChild;
}

Node* rebalance(Node* node) {
    updateHeight(node);
    long long bf = balanceFactor(node);
    if (bf == 2) {
        if (balanceFactor(node->left) < 0) {
            node->left = rotateLeft(node->left);
        }
        return rotateRight(node);
    } else if (bf == -2) {
        if (balanceFactor(node->right) > 0) {
            node->right = rotateRight(node->right);
        }
        return rotateLeft(node);
    }
    return node;
}

Node* insert(Node* root, pair<long long, long long> key) {
    if (!root) {
        return new Node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    } else {
        return root; // duplicate key
    }
    return rebalance(root);
}

bool contains(Node* root, pair<long long, long long> key) {
    while (root) {
        if (key < root->key) {
            root = root->left;
        } else if (key > root->key) {
            root = root->right;
        } else {
            return true;
        }
    }
    return false;
}

void destroy(Node* root) {
    if (root) {
        destroy(root->left);
        destroy(root->right);
        delete root;
    }
}

void query(Node* node, long long b, long long& ans) {
    if (!node) {
        return;
    }
    if (node->key.first <= b && node->key.second >= b) {
        ans++;
    }
    if (node->key.first <= b) {
        query(node->right, b, ans);
    }
    if (node->key.second >= b) {
        query(node->left, b, ans);
    }
}

int main() {

  // ---taking input
    long long N,A,B,Q;
    cin>>N>>A>>B>>Q;
    // -----------------------
    long long ans=0;
    Node* root = nullptr;

    // ---generating the input
    long long L[N];
    long long R[N];
    L[0] = A;
    R[0] = B;
    root = insert(root, {L[0], R[0]});
    for(long long i=1;i<N;i++){
        L[i] = L[i-1] * (A*i+B)%MD;
        R[i] = L[i] + (A*i+B)%MD;
        root = insert(root, {L[i], R[i]});
    }
    long long q[Q];
    q[0] = A+B;
    query(root, q[0], ans);
    for(long long i=1;i<Q;i++){
        q[i] = q[i-1]*(A*i+B)%MD;
        query(root, q[i], ans);
    }




//     long long n=5;
//     // cin >> n;
//     Node* root = nullptr;
//     long long arr[n][2]={{1,5},{3,9},{5,6},{2,7},{6,10}};
//     for (long long i = 0; i < n; i++) {
//         // long long a, b;
//         // cin >> a >> b;
//         root = insert(root, {arr[i][0], arr[i][1]});
//     }
// long long q=9;
// // cin >> q;
// long long ans = 0;
// long long arr1[q]={1,2,3,4,6,7,8,9,10};
// for (long long i = 0; i < q; i++) {
//     // long long b;
//     // cin >> b;
//     query(root, arr1[i], ans);
// }
cout << ans;
destroy(root);
return 0;
}