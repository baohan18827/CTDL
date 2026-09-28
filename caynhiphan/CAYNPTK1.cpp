#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};
Node* push (Node* root, int val) {
    if (root==NULL) return new Node(val);
    else if (val<root->data) {
        root->left=push(root->left, val);
    }
    else {
        root->right=push(root->right, val);
    }
    return root;
}
void Postorder (Node* root) {
    if (root==NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
int main () {
    Node* p=NULL;
    int x;
    while (cin>>x) {
        p=push(p,x);
    }
    Postorder(p);

}