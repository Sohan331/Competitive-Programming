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



    cout<<"Enter the value where you want to insert: ";
    int val;
    cin>>val;

    temp=lst;

    nptr=new node;
    nptr->data=val;
    nptr->next=NULL;


    while(temp->next!=NULL && temp->next->data<val){
        temp=temp->next;
    }

    nptr->next=temp->next;
    temp->next=nptr;


    temp=lst;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
