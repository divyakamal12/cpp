#include <iostream>
using namespace std;
#include "node.cpp"
int main(){
	node n1(1);
	node *head= &n1;
	node n2(2);
	n1.next = &n2;
	node n3(3);
	n2.next= &n3;
	cout<<n1.data<<endl;
	cout<<head->data;

}