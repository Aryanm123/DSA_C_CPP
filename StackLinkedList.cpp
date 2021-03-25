#include <iostream>
using namespace std;

template<typename T>
class Stack{

	class Node{
		public:
			T data;
			Node *next;
	}*head ;
	
	public:
		Stack(T x){
			head = NULL;
		}
		
		void push(T x){
			Node *newNode  = new Node;
			newNode -> data = x;
			if(!head){
				head = newNode;
				newNode -> next  = NULL;
			}
			else{
				newNode -> next  = head;
				head = newNode;
			}
			
		}
		
		void display(){
			if(!head)
				cout<<NULL;
			else{
				Node *temp = head;
				while(!temp){
					cout<<temp->data<<"  ";
					temp = temp->next;
				}
				
			}	
			cout<<endl;
		}
};
int main(int argc, char** argv) {
	string s = "hello";
	cout<<sizeof(s)<<endl;
	return 0;
}
