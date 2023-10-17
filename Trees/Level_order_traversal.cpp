#include<iostream>
#include<queue>
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
void levelorder(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
   

    while(!q.empty())
    {   
        node*temp=q.front();       
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
           
        }
        if(temp->right)
        {
            q.push(temp->right);
         
        }

        }
    }
}
int main()
{
    node* root=NULL;
    root=create(root);
    cout<<"Tree in level order traversal : "<<endl;
    levelorder(root); 
}