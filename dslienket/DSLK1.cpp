#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node *next;
    Node(char val) : data(val) , next(NULL) {};
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList () : head(NULL) {};
        void PushFront (char val) {
            Node* newNode = new Node(val);
            newNode->next=NULL;
            head=newNode;
        } 
        void PushBack (char val) {
            Node* newNode = new Node(val);
            if (head==NULL) {
                head=newNode;
                return;
            }
            Node* cur=head;
            while (cur->next!=NULL) {
                cur=cur->next;
            }
            cur->next=newNode;
        }   
        void tangdan () {
            Node* cur=head;
            while (cur->next!=NULL) {
                if (cur->next->data<=cur->data) {
                    Node* tmp=cur->next;
                    cur->next=tmp->next;
                    delete tmp;
                }
                else {
                    cur=cur->next;
                }
            }
        }
        void Print () {
            Node* cur=head;
            while (cur!=NULL) {
                cout<<cur->data<<' ';
                cur=cur->next;
            }
        }
};
int main () {
    LinkedList p;
    char c;
    while (cin>>c) {
        p.PushBack(c);
    }
    p.tangdan();
    p.Print();
}