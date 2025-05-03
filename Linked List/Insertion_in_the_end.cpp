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
    node *temp;
    cout << "How many nodes do you want ? ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        nptr = new node;
        nptr->data = i * 3;
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

    temp = lst;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    cout << "After the insertion " << endl;
    nptr = new node;
    nptr->data = (n + 1) * 3;
    nptr->next = NULL;
 
    temp = lst;
    while (temp->next != NULL)
    { 
        temp = temp->next;
    }
    temp->next = nptr; 

    temp = lst;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}