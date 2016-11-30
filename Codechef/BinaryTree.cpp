#include<iostream>
#include<queue>
using namespace std;

class Tree{
	public:
	int data;
	Tree* left;
	Tree* right;
	
	Tree(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Tree* takeInput(Tree* root){
	int root_data, left_data, right_data;
	queue<Tree*> Q;
	cout << "Enter Root Data: ";
	cin >> root_data;
	Tree* root = new Tree(root_data);
	Q.push(root);
	while(!Q.empty()){
		Tree* temp = Q.front();
		Tree* right_child;
		Q.pop();
		Tree* left_child;
		cout << "Enter the left child of " << temp->data;
		cin >> left_data;
		if(left_data != -1){
			left_child->data = left_data;
			temp->left = left_child;
			Q.push(left_child);
		}
		cout << "Enter the right child of " << temp->data;
		cin >> right_data;
		if(right_data != -1){
			right_child->data = right_data;
			temp->right = right_child;
			Q.push(right_child);
		}
	}
	return root;
}

void PrintLevelOrder(Tree* root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	Tree* temp;
	queue<Tree*> Q;
	Q.push(root);
	while(!Q.empty()){
		temp = Q.front();
		Q.pop(); 
		if(temp->left != NULL){
			cout << temp->left->data << " ";
			Q.push(temp->left);
		}
		if(temp->right != NULL){
			cout << temp->right->data << " ";
			Q.push(temp->right);
		}
	}
}

int main(){
	Tree* root = takeInput(root);
	PrintLevelOrder(root);
}
