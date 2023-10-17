#include<iostream>
using namespace std;
class linklist 
{
    public:
    int data;
    linklist*next;

    linklist(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void add(int data, linklist* &head)
    { 
        linklist*k2 = new linklist(data);
        k2->next=head;
        head=k2;
    }
void print(linklist*head)
{
        linklist*recent=head;
        while (recent!=NULL)
        {
        cout<<recent->data<<"->";
        recent=recent->next;
        }
}
int main()
{
    linklist*k1=new linklist(18);
    linklist*head=k1;

    add (19,head);
    add (20,head);
    
    print (head);
}