#include<iostream>
#include<queue>
using namespace std;

class tree{
	public:
		int data;
		tree* left;
		tree* right;
		
		tree(int data){
			this->data=data;
			left=NULL;
			right=NULL;
	}
};

tree* takeinput(){
	int root_data;
	int left_data;
	int right_data;
	cout << "Enter Root Data: ";
	cin >> root_data;
	if(root_data == -1){
		return NULL;
	}
	tree* root = new tree(root_data);
	queue<tree*> Q;
	Q.push(root);
	while(!Q.empty()){
		tree* temp = Q.front();
		Q.pop();
		cout << "Enter left child of " << temp->data << " : ";
		cin >> left_data;
		if(left_data != -1){
			tree* left_child = new tree(left_data);	
			temp->left = left_child;
			Q.push(left_child);		
		}
		cout << "Enter right child of " << temp->data << " : ";
		cin >> right_data;
		if(right_data != -1){
			tree* right_child = new tree(right_data);
			temp->right = right_child;	
			Q.push(right_child);
		}
	}
	return root;
}

void printtree(tree* root){
	if(root==NULL){
		return;
	}
	cout << root->data << " : " << root->left->data << " " << root->right->data;
	printtree(root->left);
	cout << endl;
	printtree(root->right);
	cout << endl;
}

int main(){
	tree* root = takeinput();
	printtree(root);
}
