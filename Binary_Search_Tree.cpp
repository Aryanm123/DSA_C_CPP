#include<bits/stdc++.h>
using namespace std;
struct BST{
	int data;
	BST *left;
	BST *right;
};

BST *insert(BST *root,int x){
	BST *newNode = new BST();
	newNode->left = newNode->right = nullptr;
	if(!root){
		root = newNode;
	}
	else if(x<=root->data){
		root->left = insert(root->left,x);
	}
	
		root->right = insert(root->right,x);
	return root;
}

bool search(BST *root,int x){
	if(!root)
		return false;
	else if(root->data == x)
		return true;
	else if(x<root->data)
		return search(root->left,x);
	else
		return search(root->right,x);			
}
int main(){
	BST *rootptr = nullptr;
	rootptr = insert(rootptr,10);
//	rootptr = insert(rootptr,20);
//	rootptr  = insert(rootptr,7);
//	cout<<search(rootptr,7);
	return 0;
}
