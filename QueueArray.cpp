#include <bits/stdc++.h>
using namespace std;

class Queue{
	int size;
	int *q;
	int front;
	int rear;
public:
	Queue(int size){
		this->size = size;
		q = new int[size];
		front = rear = -1;
	}

	void enqueue(int x){
		if(rear == size-1)
			cout<<"Queue overflow"<<endl;
		else{
			q[++rear] = x;
		}
	}
	int dequeue(){
		int temp = -999;
		if(front == rear)
			cout<<"Queue underflow"<<endl;
		else
			temp  = q[++front];
		return temp;
	}

	void display(){
		for(int i=front+1;i<=rear;i++)
			cout<<q[i]<<"  ";
	}
};

int main(){
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout<<q.dequeue()<<endl;
	q.enqueue(50);
	q.display();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();q.dequeue();
	while(1){
		q.dequeue();
	}
}
