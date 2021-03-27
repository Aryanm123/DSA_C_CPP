#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	Node *leftptr;
	Node *rightptr;
	int data;
}*Root = nullptr;

class BST{
public:
	
	void insert(int key ){
		Node *root = Root;
		if(!root){
			Node *newNode = new Node;
			newNode->leftptr = newNode->rightptr = nullptr;
			newNode->data = key;
			return ;
		}
		else{
			Node *temp =nullptr;

			while(root){
				temp = root;
				if(root->data < key){
					root = root->rightptr;
				}
				else if(root->data > key)
					root  = root->leftptr;
				else
					return ;
			}
			Node *newNode = new Node;
			newNode->leftptr = newNode->rightptr = nullptr;
			newNode->data = key;
			if(temp->data <key){
				
				temp->rightptr = newNode;

			}
			else{
				
				temp->leftptr = newNode;

			}
			return ;
		}
	}
	
	void inorder(Node *root){
		if(root){
			
			inorder(root->leftptr);
			cout<<root->data<<"  ";
			inorder(root->rightptr);
			
		}
	}
	
			
	
};

int main(){
//	Node *root = nullptr;
	BST obj;
	 obj.insert(9);
	 obj.insert(13);
	obj.insert(17);
	obj.inorder(Root);
	return 0;
}