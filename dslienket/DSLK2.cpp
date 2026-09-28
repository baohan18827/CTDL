#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node (char val) : data(val), next(NULL) {};
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() : head(NULL) {};
        void PushFront (char val) {
            Node* newNode = new Node (val);
            newNode->next=head;
            head=newNode;
        }
        void PushBack (char val) {
            Node* newNode = new Node (val);
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
        void Print () {
            Node* cur=head;
            while (cur!=NULL) {
                cout<<cur->data;
                cur=cur->next;
            }
        }
        void Insert () {
            for (char c='A';c<='Z';c++) {
                if (head==NULL || head->data>c) {
                    PushFront(c);
                    continue;
                }
                Node* cur=head;
                while (cur->next!=NULL && cur->next->data<c) {
                    cur=cur->next;
                }
                if (cur->data==c||(cur->next!=NULL&&cur->next->data==c)) continue;
                Node* newNode = new Node(c);
                newNode->next=cur->next;
                cur->next=newNode;
            }
        }
};
int main () {
    LinkedList p;
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        char c;
        cin>>c;
        p.PushBack(c);
    }
    p.Print();
    p.Insert();
    cout<<endl;
    p.Print();
}