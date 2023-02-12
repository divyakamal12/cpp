#include <bits/stdc++.h>
using namespace std;
#include "node.cpp"
node* takeinput(){
	int data;
	cin>> data;
	node* head = NULL;
	node* tail = NULL;
	while(data != (-1)){
		node *newnode = new node(data);
		if (head == NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail ->next = newnode;
			tail=newnode;
		}
		cin >>data;
	} 
	return head;

}
void print(node *head){
	while(head != NULL){
		cout<<head->data<<"->";
		head = head-> next;
	}
}


int sizell(node *head){
	int size = 1;
	while(head->next!=NULL){
		head=head->next;
		size++;
	}
	return size;
}

void midelement(node *head){
	node* slow = head;
	node* fast = head->next;
	while(fast !=NULL && fast->next !=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<endl<<slow->data;

}


int main(){
	node* head = takeinput();
	print(head);
	//palernderm(head);
	int size = sizell(head);
	cout<<endl<<size;
	midelement(head);
}