#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int val) : data(val), next(NULL) {}
};
class Stack {
    private:
        Node* topNode;
    public:
        Stack () : topNode(NULL) {};
        void push (int c) {
            Node* newNode = new Node(c);
            newNode->next=topNode;
            topNode=newNode;
        }
        bool empty() {
            return topNode==NULL;
        }
        int top() {
            return topNode->data;
        }
        void  pop() {
            if (empty()) return; 
            Node* tmp=topNode;
            topNode=topNode->next;
            delete tmp;
        }
        ~Stack() {
            while (!empty()) pop();
        }
};
int main () {
    Stack p;
    int c;
    cin>>c;
    if (c == 0) {
        cout << 0;
        return 0;
    }
    while (c>0) {
        p.push(c%2);
        c=c/2;
    }
    while (!p.empty()) {
        cout<<p.top();
        p.pop();
    }
}