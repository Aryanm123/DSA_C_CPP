#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	Node *leftptr;
	Node *rightptr;
	int data;
};

class BT{
	Node *root;
public:
	BT(){root=nullptr;}
	void createTree(){
		queue<Node*> q;
		if(!root){
			Node *newNode = new Node;
			int x;
			cin>>x;
			newNode -> data = x;
			newNode->leftptr = newNode->rightptr = nullptr;
			q.push(root);
		}
		else{
			while(!q.empty()){
				Node *curr = q.front();
				q.pop();
				cout<<"Enter left child of "<<curr->data<<"  ";
				int x;
				cin>>x;
				if(x!=-1){
					Node *temp =  new Node;
					temp -> data = x;
					temp->leftptr = temp->rightptr = nullptr;
					q.push(temp);
				}
				cout<<endl;
				cout<<"Enter Right child of "<<curr->data<<"  ";
				int y;
				cin>>y;
				if(y!=-1){
					Node *temp =  new Node;
					temp -> data = y;
					temp->leftptr = temp->rightptr = nullptr;
					q.push(temp);
				}
				cout<<endl;
			}
		}
	}

	void preorder(){
		if(root){
			cout<<root->data<<"  ";
			preorder(root->leftptr);
			preorder(root->rightptr);
		}
	}
	void postorder(){
		if(root){
			
			postorder(root->leftptr);
			postorder(root->rightptr);
			cout<<root->data<<"  ";
		}
	}
	void inorder(){
		if(root){
			
			inorder(root->leftptr);
			cout<<root->data<<"  ";
			inorder(root->rightptr);
			
		}
	}
	
			
	
};

int main(){
	BT tree;
	tree.createTree();
	tree.preorder();
	return 0;
}