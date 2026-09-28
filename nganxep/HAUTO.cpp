#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data (val), next(NULL) {}
};
class Stack {
    private:
        Node* topNode;
    public:
        Stack() : topNode(NULL) {}
        void init(){
            topNode->data=-1;
        }
        void push (int c) {
            Node* cur=new Node (c);
            cur->next=topNode;
            topNode=cur;
        } 
        int top () {
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
int main () {
    Stack p;
    string s;
    getline (cin,s);
    stringstream ss(s);
    string c;
    while (ss>>c) {
        if (c=="+"||c=="-"||c=="*") {
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            if (c=="+") {
                p.push(b+a);
            }
            if (c=="-") {
                p.push(b-a);
            }
            if (c=="*") {
                p.push(b*a);
            }
        }
        else if (c!=" ") 
            p.push(stoi(c));    
    }
}
