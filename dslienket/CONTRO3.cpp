#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int val): data(val), next(NULL){};
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList () :head(NULL) {};
        void PushBack(int x) {
            Node* newNode= new Node(x);
            if (head==NULL) {
                head=newNode;
                return;
            } 
            Node* cur=head;
            while (cur->next) {
                cur=cur->next;
            }
            cur->next=newNode;
        }   
        void Insert (int k, int a) {
            Node* temp=new Node(a);
            if (k==1) {
                temp->next=head;
                head=temp;
                return;
            }
            Node* cur=head;
            for (int i=1;i<k-1;i++) {
                cur=cur->next;
            }
            temp->next=cur->next;
            cur->next=temp;
        }
        void Print () {
            Node* cur=head;
            while (cur) {
                cout<<cur->data<<' ';
                cur=cur->next;
            }
        }
};
int main () {
    int n,a,k,x;
    cin>>n>>a>>k;
    LinkedList p;
    for (int i=0;i<n;i++) {
        cin>>x;
        p.PushBack(x);
    }
    cout<<n+1<<endl;
    p.Insert(k,a);
    p.Print();
}