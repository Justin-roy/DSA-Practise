#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data) : val(data), next(NULL) {}
    // no value default value constructor
    Node() : val(0), next(NULL) {}
};

void insertions(Node* &node, int val)
{
    Node *temp = new Node(val);
    temp->next = node;
    node = temp;
}

void printNode(Node *node)
{
    while (node != NULL)
    {
        cout << node->val << " ";
        node = node->next;
    }
}

int main()
{
    Node *node = new Node(25);
    
    int val,  times;
    cout << "Enter the number of nodes you want to insert: ";
    cin >> times;
    while(times != 0)
    {
        cout << "Enter the value to be inserted: ";
        cin >> val;
        insertions(node, val);
        times--;
    }
    
    cout << "\nThe linked list is: ";
    printNode(node);
    cout << endl;

    return false;
}