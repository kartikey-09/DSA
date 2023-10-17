#include <iostream>
using namespace std;

class linklist
{
public:
    int data;
    linklist *next;

    // creating constructor
    linklist(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// creating another node
void add(int data, linklist *&head)
{
    linklist *k2 = new linklist(data);
    k2->next = head;
    head = k2;
}
// printing another node
int print(linklist *head)
{
    linklist *recent = head;
    while (recent != NULL)
    {
        cout << "->" << recent->data;
        recent = recent->next;
    }
}
int reverse(linklist*& head)
{
    linklist*prev=NULL;
    linklist*current=head;
    linklist*forward;

    while(current!=NULL)
    {   
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
           
    }
    head=prev;
       
}
int main()
{
    int c = 0, p;
    linklist *k1 = new linklist(18);
    linklist *head = k1;
    add(19, head);
    add(20, head);
    add(21, head);
    add(22, head);

    print(head);
    cout << endl;
    reverse(head);
    print(head);
}