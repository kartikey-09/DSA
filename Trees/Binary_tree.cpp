#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    
    // constructor
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
node* create(node* root)
{   
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node(data);

    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter the data for left child "<<data<<endl;
    
    root->left=create(root->left);

    cout<<"Enter the data for right child "<<data<<endl;
    
    root->right=create(root->right);

    return root;

}


int main()
{
    node* root=NULL;
    root=create(root);
}