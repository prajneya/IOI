#include<iostream>
using namespace std;

struct Tree{
	int data;
	Tree *right;
	Tree *left;
};

void Print(Tree* node){
	if(node){
		Print(node->left);
		cout << node->data << endl;
		Print(node->right);
	}
}

int main(){
	Tree *root = NULL;
	Tree *rightb = NULL;
	Tree *leftb = NULL;
	Tree *current = NULL;
	
	root = new Tree;
	rightb = new Tree;
	leftb = new Tree;
	current = new Tree;
	
	root->data = 1;
	root->left = leftb;
	root->right = rightb;
	
	rightb->data = 2;
	rightb->left = NULL;
	rightb->right = NULL;
	
	leftb->data = 2;
	rightb->left = NULL;
	rightb->right = NULL;
	
	Print(root);
	
}
