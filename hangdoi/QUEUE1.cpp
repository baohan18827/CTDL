#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node(char val) : data(val), next(NULL) {}
};
class Queue {
    private:
        Node* frontNode;
        Node* backNode;
    public:
        Queue(): frontNode (NULL), backNode (NULL) {}
        bool empty() {
            return frontNode==NULL; 
        }
        void push(char c) {
            Node* newNode=new Node(c);
            if (empty()) {
                frontNode=backNode=newNode;
            }
            else {
                backNode->next=newNode;
                backNode=newNode;
            }
        }   
        void pop() {
            if (empty()) return;
            Node* tmp=frontNode;
            frontNode=frontNode->next;
            if (frontNode==NULL) backNode==NULL;
            delete tmp;
        }
        char front() {
            return frontNode->data;
        }
        ~Queue() {
            while (!empty()) pop();
        }
};
int main () {
    Queue p;
    char c;
    while (cin>>c) {
        if (c!='*') {
            p.push(c);
        }
        else {
            if (!p.empty()) {
                cout<<p.front();
                p.pop();
            }
        }
    }
}