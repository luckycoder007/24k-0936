#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int d){
			data=d;
			next=NULL;

		}
		
};
class Linkedlist{
	public:
		Node *head;
		Node*tail;
		Linkedlist(){
			head=NULL;
			tail=NULL;
		}
		void insert(int val){
			int i;
			Node *n=new Node(val);
			if (head==NULL){
				head=n;
				tail=n;
			}
			else{
				tail->next=n;
				tail=tail->next;
				
			}
		}
		void middle_insert(int posi, int val)
	{    
	int i;
	 Node *n=new Node(val);
	Node *curr;
	Node *prev;
	curr=head;
	for(i=0;i<posi;i++){
		prev=curr;
		curr=curr->next;
}
    prev-> next=n;
    n->next=curr;
			
		}
		void front_insert(int val){
			Node *n=new Node(val);
			n->next=head;
			head=n;
			
		}
		void remove(int val){
			Node *temp=head;
			Node *prev;
			while(temp->data != val){
				prev=temp;
				temp=temp->next;
			}
			prev->next=temp->next;
			delete temp;
		}
		void move(int n){
			Node *temp=head;
			while(n--){
				tail->next=temp;
				head=temp->next;
			}
		}
		void display(){
			Node *temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
};
int main(){
	int l,a,m;
	cout<<"Enter list lentgh:"<<endl;
	cin>>l;
	cout<<"Enter elements of list: "<<endl;
	Linkedlist l1;
	for(i=0;i<l;i++){
		cin<<a;
		l1.insert(a);
		
	}
	cout<<"Enter number to move: "<<endl;
	cin>>m;
	l1.move(m);
	l1.display();
}