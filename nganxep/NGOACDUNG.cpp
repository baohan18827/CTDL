#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node (char x) : data(x), next(NULL) {}
};
class Stack {
    private:
        Node* topNode;
    public:
        Stack() : topNode (NULL) {}
        void push (char c) {
            Node* newNode = new Node(c);
            newNode->next=topNode;
            topNode=newNode;
        }
        bool empty() {
            return topNode==NULL;
        }
        char top() {
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
    char c;
    
    while (cin>>c) {
        if (c=='['||c=='('||c=='{') {
            p.push(c);
        }
        else {
            if(p.empty()) {
                cout<<"no";
                return 0;
            }
            if (c==']'&&p.top()=='[') {
            p.pop();
            }
            else if (c=='}'&&p.top()=='{') {
                p.pop();
            }
            else if (c==')'&&p.top()=='(') {
                p.pop();
            }
            else {
                cout<<"no";
                return 0;
            }
        }
    }
    if(p.empty()) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}
