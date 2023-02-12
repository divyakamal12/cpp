#include <bits/stdc++.h>
using namespace std;
#include "node.cpp"
node* takeInput(){
	int data;
	cin>>data;
	node *head =NULL;
	node *tail = NULL;
	while(data!=(-1)) {
		node *newnode = new node(data);
		if(head==NULL){
			head = newnode;
			tail= newnode;
		}
		else{
			tail->next=newnode;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}
void printnode(node *head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
node* insert(node *head,int i,int data){
	int j=0;
	node *newnode =new node(data);
	if (i==0)
	{
		newnode->next=head;
		head = newnode;
		return head;
	}
	while(head!=NULL && j<i-1){
		head=head->next;
		j++;
	}
	if(head!=NULL){
		node *temp = head->next;
		head->next=newnode;
		newnode->next=temp;
	}
	return head;
	

}
int main(){
	node *head = takeInput();
	printnode(head);
	head =insert(head,1,100);
	cout<<endl;
	insert(head,55,99);
	printnode(head);
	head =insert(head,1,100);
	cout<<endl;


	
}