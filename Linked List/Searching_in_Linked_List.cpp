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
    int target;
    node *temp;
    cout << "What's your target : ";
    cin >> target;
    temp = lst;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            cout << "Found the target ";
            break;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Not found ";
    }
}
