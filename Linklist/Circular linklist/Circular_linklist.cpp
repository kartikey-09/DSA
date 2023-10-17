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
void add(int data, linklist* &head,linklist*&milan)
    { 
        linklist*k2 = new linklist(data);
        k2->next=head;
        head=k2;
        milan->next=head;
    }
void print(linklist*head)
{
        linklist*recent=head;
        do
        {
        cout<<recent->data<<"->";
        recent=recent->next;
        }
        while (recent->next!=head->next);       
}
int main()
{
    linklist*k1=new linklist(18);
    linklist*head=k1;
    linklist*milan=k1;

    add (19,head,milan);
    add (20,head,milan);
    
    print (head);
}