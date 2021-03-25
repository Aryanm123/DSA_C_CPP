#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
		int top ;
		int size;
		T *st;
	public:
		Stack(int size){
				this->size = size;
				this->top = -1;
				st = new T[this->size];
		}
		 void push(T x){
		 	if(top == size-1)
		 		cout<<"Stack overflow"<<endl;
		 	
		 	else
		 		{
		 			st[++top] = x;
				 }
		 }
		 
		 T pop(){
		 	if(top == -1)
		 		cout<<"Stack underflow"<<endl;
		 	else{
		 		T temp = st[top--];
		 		cout<<temp<<endl;
			 }
		 }
		 
		 void display(){
		 	for(int i=top;i>=0;i--)
		 		cout<<st[i]<<"  ";
		 	cout<<endl;	
		 }
};
int main(){
	
	
	Stack<int> st(5);
	st.push(100);
	st.push(1212);
	st.push(90);
	st.display();
	cout<<st.pop();
	st.display();
	return 0;
}
