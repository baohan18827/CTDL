#include <bits/stdc++.h>
using namespace std;

//Cách easy
// int main () {
//     stack<char> x;
//     char c;
//     while (cin>>c) {
//         if (c!='*')
//             x.push(c);
//         else {
//             if (!x.empty()) {
//                 cout<<x.top();
//                 x.pop();
//             }
//         }
//     }
// }

struct Node {
        char data;
        Node* next;
};
class Stack {
    private:
        Node* topNode;
    public:
        Stack(): topNode(NULL) {}
        void push(char c) {
            Node* newNode = new Node (c);
            newNode->next=topNode;
            topNode=newNode;
        }
        bool empty () {
            return topNode==NULL;
        }
        void pop () {
            if (empty()) return;
            Node* tmp=topNode;
            topNode=topNode->next;
            delete tmp;
        }
        char top() {
            return topNode->data;
        } 
        ~Stack() {
            while (!empty()) pop();
        }
};
int main () {
    Stack x;
    char c;
    while (cin>>c) {
        if (c!='*')
            x.push(c);
        else {
            if (!x.empty()) {
                cout<<x.top();
                x.pop();
            }
        }
    }
}