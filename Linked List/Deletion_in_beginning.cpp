#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *lst, *tptr, *nptr;


int main()
{
    lst=NULL;

    cout<<"How many nodes do you want ? ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        nptr=new node;
        nptr->data=i*3;
        nptr->next=NULL;
        if(lst==NULL){
            lst=nptr;
            tptr=nptr;
        }
        else{
            tptr->next=nptr;
            tptr=nptr;
        }
    }
    node *temp=lst;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


    temp=lst;
    node *tmp;
    if(lst==NULL){
        cout<<"There is no node to delete "<<endl;
    }
    else {
        temp=lst;
        tmp=temp->next;
        delete(temp);
        lst=tmp;
    }
    cout<<"After the deletion "<<endl;
temp=lst;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
