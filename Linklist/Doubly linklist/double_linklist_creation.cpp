#include <iostream>
using namespace std;
class linklist
{
public:
    int data;
    linklist *next;
    linklist *prev;

    linklist(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
int print(linklist *&head)
{
    linklist *recent = head;
    while (recent != NULL)
    {
        cout << "->" << recent->data;
        recent = recent->next;
    }
}
void add_node(linklist *&head, int data)
{
    linklist *k2 = new linklist(data);
    
    k2->next = head;
    head->prev = k2->next;

    head=k2;
}
int main()
{
    linklist *k1 = new linklist(10);
    linklist *head = k1;

    add_node(head, 11);

    add_node(head, 12);

    add_node(head, 13);

    print(head);

}