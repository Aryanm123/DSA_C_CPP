#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	Node *lchild;
	Node *rchild;
	int height;
	int data;
}*root = nullptr;

class AVL{
	public:
	int NodeHeight(Node *temp){
		int hl,hr;
		hl = temp && temp->lchild?temp->lchild->height:0;
		hl = temp && temp->rchild?temp->rchild->height:0;
		return hl>hr?hl:hr;
	}

	int balanceFactor(Node *temp){
		int hl,hr;
		hl = temp && temp->lchild?temp->lchild->height:0;
		hl = temp && temp->rchild?temp->rchild->height:0;
		return hl-hr;
	}
	 Node * LLRotation( Node *p)
		{
		  Node *pl=p->lchild;
		  Node *plr=pl->rchild;

		 pl->rchild=p;
		 p->lchild=plr;
		 p->height=NodeHeight(p);
		 pl->height=NodeHeight(pl);

		 if(root==p)
		 	root=pl;

		 return pl;
		}
	 Node *LRRotaton(Node *p){
	 	Node *pl = p->lchild;
	 	Node *plr = pl->rchild;
	 	pl->rchild = plr->lchild;
	 	p->lchild = plr->rchild;
	 	plr->lchild = pl;
	 	plr->rchild = p;
	 	if(root == p)
	 		root = plr;
	 	plr->height = NodeHeight(plr);
	 	pl->height = NodeHeight(pl);
	 	p->height = NodeHeight(p);

	 	return plr;
	 }	

		Node *insert(Node *p,int key){
			Node *t = nullptr;
			if(!p){
				Node *newNode = new Node;
				newNode -> data = key;
				newNode -> height = 0;
				newNode ->lchild = newNode -> rchild = nullptr;
				return newNode;
			}
			if(key<p->data)
				p->lchild = insert(p->lchild,key);
			else if(key>p->data)
				p->rchild = insert(p->rchild,key);
			p->height = NodeHeight(p);

			if(balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
					return LLRotation(p);
			return p;
		}
};
int main(){
	AVL obj;
	root  = obj.insert(root,10);
	obj.insert(root,6);
	obj.insert(root,4);

	return 0;
}