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
int Remove(int c, linklist *&head)
{
    // For deleting first node
    if (c == 1)
    {
        linklist *temp = head;
        head = head->next;
        delete temp; // Deleting the memory of that node
    }
    // For deleting any node
    else
    {
        linklist *prev = NULL;
        linklist *current = head;
        int traverse = 1;
        while (traverse <= c)
        {
            if (traverse == c)
            {
                linklist *temp = current;
                prev->next = current->next;
                delete temp; // Deleting the memory of that node
            }
            prev = current;
            current = current->next;
            traverse++;
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

    print(head);
    cout << endl;
    cout << "Enter the value of c ";
    cout << endl;
    cin >> c;
    cout << endl;
    Remove(c, head);
    print(head);
}