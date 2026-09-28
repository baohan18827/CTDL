#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};
class Queue {
    private:
        Node* frontNode;
        Node* backNode;
        int soPhanTu;
    public:
        Queue():frontNode(NULL), backNode (NULL) {};
        bool empty() {
            return frontNode==NULL;
        }
        void push(char c) {
            if (soPhanTu>=15000) return;
            Node* newNode=new Node(c);
            if (empty()) {
                frontNode=backNode=newNode;
            }
            else {
                backNode->next=newNode;
                backNode=newNode;
            }
            soPhanTu++;
        }
        int front() {
            return frontNode->data;
        }
        void pop() {
            if (empty()) return;
            Node* tmp=frontNode;
            frontNode=frontNode->next;
            if (frontNode==NULL) backNode=NULL;
            delete tmp;
            soPhanTu--;
        }
        void xoaMax () {
            if (empty()) return;
            int mx=front();
            for (Node*p=frontNode;p!=NULL;p=p->next) {
                if (p->data>mx) {
                    mx=p->data;
                }
            }
            

        }

        ~Queue() {
            while (!empty()) {
                pop();
            }
        }
};
int main () {
    Queue p;
    char c;
    while (cin>>c) {
        if (c=='+') {
            int x;
            cin>>x;
            p.push(x);
        }
        else {
            
        }
    }
}