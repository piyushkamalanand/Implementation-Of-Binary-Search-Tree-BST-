#include<iostream>
using namespace std;
struct BSTnode
{
    int data;
    BSTnode* left;
    BSTnode* right;
};
BSTnode* GenerateNewNode(int data)// Create New Node
{
    BSTnode* newNode=new BSTnode();
    newNode->data = data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
BSTnode* Insert(BSTnode* root,int data)//Insering Element in Tree
{
    if(root==NULL)
    {
        root=GenerateNewNode(data);
    }
    else if(root->data >= data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}
bool Search(BSTnode* root,int data)// Searching Element
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}
int main()
{
    BSTnode* root=NULL;  //create empty tree
    // Its Static Here You can make it Dynamic By asking Elements from User.
    root = Insert(root,16);
	root = Insert(root,11);
	root = Insert(root,21);
	root = Insert(root,26);
	root = Insert(root,89;
	root = Insert(root,14);

	int s;// Element To Search.
	cout<<"Enter The Number To Search - "<<endl;
	cin>>s;
	if(Search(root,s)==true)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}
