#include <bits/stdc++.h>
class Node{
public:
	int data;
	Node *next;
	
}*front,*rear;
class Queue{
public:
	Queue(int x){
		Node *newNode = new Node;
		newNode->data  = x;
		newNode->next  = nullptr;
		front = rear = newNode;
	}

	void enqueue(int x){
		Node *newNode = new Node;
		newNode->data  = x;
		newNode->next  = nullptr;

		if(!rear){
			front = rear = newNode;
		}
		else{
			rear->next = newNode;
			rear = rear->next;
		}
	}

	int dequeue(){
		if(!front){
			// cout<<"NUll"<<endl;
			return -1;
		}
		else{
			int x = front->data;
			Node *temp = front;
			front = front->next;
			delete temp;
			return x;
		}
	}

	void display(){
		Node *temp = front;
		while(temp){
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
		cout<<endl;
	}
};
int main(){
	Queue q(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(50);
	q.display();
	cout<<q.dequeue()<<endl;
	q.display();
	return 0;
}