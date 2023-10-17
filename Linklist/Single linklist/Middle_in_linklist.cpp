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
// printing  node
int print(linklist *head)
{
    linklist *recent = head;
    while (recent != NULL)
    {
        cout << "->" << recent->data;
        recent = recent->next;
    }
}
int middle(linklist *&head)
{   
    // for traversing and counting total nodes
    linklist *recent = head;
    int count = 0;
    while (recent != NULL)
    {
        count++;
        recent = recent->next;
    }

    // for finding middle node 
    int mid = 0;
    mid = count / 2;
    mid = mid + 1;
    cout << "mid " << mid;

    // for printing the data of middle element
    int c = 1;
    linklist *temp = head;
    while (c != mid)
    {
        temp = temp->next;
        c++;
        if (c == mid)
        {
            cout << endl;
            cout << "Middle element data is " << temp->data;
        }
    }
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
    add(23, head);
    add(24, head);

    print(head);
    cout << endl;
    middle(head);
}