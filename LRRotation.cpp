#include <bits/stdc++.h>
using namespace std;

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