#include <iostream>
using namespace std;
class linklist
{
public:
    int data;
    linklist *next;

    linklist(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void add(int data, linklist *&head)
{
    linklist *k2 = new linklist(data);
    k2->next = head;
    
}
print(linklist *&head)
{
    linklist *recent = head;
    while (recent != NULL)
    {
        cout << "->" << recent->data;
        recent = recent->next;
    }
}

int main()
{
    int p, c = 1;
    linklist *k1 = new linklist(18);
    linklist *head = k1;

    add(19, head);
    add(20, head);
    add(21, head);
    add(22, head);

    print(head);
    cout << endl
         << "Enter the value of P ";
    cin >> p;
    add_middle(p, c, head);
    print(head);
}