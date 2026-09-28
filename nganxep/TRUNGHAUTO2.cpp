#include <bits/stdc++.h>
using namespace std;
struct Node {
    char data;
    Node* next;
    Node(char val) : data (val), next(NULL) {}
};
class Stack {
    private:
        Node* topNode;
    public:
        Stack() : topNode(NULL) {}
        void init(){
            topNode->data=-1;
        }
        void push (char c) {
            Node* cur=new Node (c);
            cur->next=topNode;
            topNode=cur;
        } 
        char top () {
            return topNode->data;
        }
        bool empty() {
            if (topNode==NULL) {
                return true;
            }
            return false;
        }
        void pop () {
            if (empty()) return;
            Node* tmp=topNode;
            topNode=topNode->next;
            delete tmp;
        }    
        bool full () {
            return !empty();
        }
};
int uutien (char c) {
    if (c=='+'||c=='-') {
        return 1;
    }
    else if (c=='*'||c=='/') {
        return 2;
    }
    else return 0;
}    
int main () {
    string s;
    getline(cin,s);
    Stack p;
    for (char c:s) {
        if (c=='(') {
            p.push(c);
        }
        else if (c==')') {
            while (p.top()!='('){
                cout<<p.top()<<' ';
                p.pop();
            }
            p.pop();
        }
        else if (c=='+'||c=='-'||c=='*'||c=='/') {
            if (p.empty()||uutien(c)>uutien(p.top())) {
                p.push(c);
            }
            else {
                while (uutien(c)<=uutien(p.top())) {
                    cout<<p.top()<<' ';
                    p.pop();
                }
                p.push(c);
            }
        }
        else cout<<c<<' ';
    }
    while (!p.empty()) {
        cout<<p.top()<<' ';
        p.pop();
    }
}