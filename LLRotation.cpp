#include <bits/stdc++.h>
using namespace std;

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