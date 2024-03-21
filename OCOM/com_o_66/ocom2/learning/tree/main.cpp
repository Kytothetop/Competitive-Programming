#include <iostream>
#include <time.h>

using namespace std;

int num(int lim = 100) {
    return rand() % lim;
}

struct node {
    int val = 0;
    node* left;
    node* right;
    node(int k) {
        val = k;
        left = right = nullptr;
    }
};

void recur(node* root, int level) {
    if (root == nullptr)
        return;

    // Print the current node's value with proper indentation
    for (int i = 0; i < level; ++i)
        cout << "  ";
    cout << root->val << endl;

    // Recur for the left and right subtrees with increased level
    recur(root->left, level + 1);
    recur(root->right, level + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    srand(time(NULL));

    node* root = new node(0);
    root->left = new node(1);
    root->right = new node(2);
    root->left->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(num(12) + 6);
    root->right->right->right = new node(num(12) + 6);
    root->right->right->right->right = new node(num(12) + 6);
    root->right->right->right->left = new node(num(12) + 6);
    root->right->right->left = new node(num(12) + 6);
    root->right->right->left->right = new node(num(12) + 6);



    recur(root, 0);

    return 0;
}
