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
linklist *reverse(linklist *head, int k)
{
    // base case
    if (head == NULL)
    { 
        return NULL;
    }
    
    // reverse nodes
    linklist *prev = NULL;
    linklist *current = head;
    linklist *forward; 
    int count = 0;

    while (current != NULL && count < k)
    {
      
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
          count++;
    }
    // recursive call
    if (forward != NULL)
    {
        head->next = reverse(current,k);
    }
    return prev;
    
}
int main()
{
    int k;
    linklist *k1 = new linklist(17);
    linklist *head = k1;
    add(18, head);
    add(19, head);
    add(20, head);
    add(21, head);
    add(22, head);

    print(head);
    cout << endl;
    cout << endl;
    cout<< "Enter the value of k ";
    cin >> k;

    linklist*milan = reverse(head, k);
    print(milan);
}
