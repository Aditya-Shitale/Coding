#include <bits/stdc++.h>
using namespace std;

struct Node {
    pair<int, int> key;
    int height;
    Node* left;
    Node* right;
    Node(pair<int, int> k) : key(k), height(1), left(nullptr), right(nullptr) {}
};

int height(Node* node) {
    return node ? node->height : 0;
}

int balanceFactor(Node* node) {
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
    int bf = balanceFactor(node);
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

Node* insert(Node* root, pair<int, int> key) {
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

bool contains(Node* root, pair<int, int> key) {
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

int main() {
    int n;
    cin >> n;
    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        root = insert(root, {a, b});
    }
    int q;
    cin >> q;
    int ans = 0;
    for (int i = 0; i < q; i++) {
        int b;
        cin >> b;
        Node* node = root;
        while (node) {
            if (node->key.first <= b && node->key.second >= b) {
                ans++;
                break;
            } else if (node->key.first > b) {
                node = node->left;
            } else {
             node = node->right;
        }
    }
}
cout << ans << " Ans is this";
destroy(root);
return 0;
}
