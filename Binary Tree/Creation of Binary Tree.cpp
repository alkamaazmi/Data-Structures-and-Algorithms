#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* buildTree(Node *root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    
    cout << "Enter data for inserting in left of " << data << endl;
    root->left=buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right=buildTree(root->right);

    return root;
}

int main(){

    Node *root=NULL;
    root=buildTree(root);
    return 0;
}