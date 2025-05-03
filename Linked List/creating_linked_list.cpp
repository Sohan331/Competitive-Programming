#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *lst, *tptr, *nptr;

int main()
{

    lst = NULL;

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        nptr = new node;
        nptr->data = i * 10;
        nptr->next = NULL;

        if (lst == NULL)
        {
            lst = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }
    }

    node *temp = lst;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
        else
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }
    
        return 0;
    }
