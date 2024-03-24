#include<iostream.h>
#include<process.h>

class Circular_Linked
{   
    //structure node is created
    struct node{
        int info;
        struct node *link;
    };
    struct node *last;
    typedef struct node *NODE;
    public: 
        //constructor is defined
        Circular_Linked()
        {
            last=NULL;
        }

        void create_list(int);
        void addatbeg(int);
        void addafter(int,int);
        void del();
        void display();
};

void Circular_Linked::create_list(int num)
{
    NODE q,tmp;
    //new nodw is created
    tmp=(NODE)new(struct node);
    tmp->info=num;
    if(last==NULL)
    {
        last=tmp;
        tmp->link=last;
    }
    else
    {
        tmp->link=last->link;
        last->link=tmp;
        last=tmp;
    }
}

//This function will new node at the beginning
void Circular_Linked::addatbeg(int num)
{
    NODE tmp;
    tmp=(NODE)new(struct node);
    tmp->info=num;
    tmp->link=last->link;
    tmp->link=tmp;
}/*End of add at beg*/

//Function to add new node at any position of the circular list

void Circular_Linked::addafter(int num,int pos)
{
    NODE tmp,q;
    int i;
    q=last->link;
    //finding the position to insert a new node
    for(i=0;i<pos-1;i++)
    {
        q=q->link;
        if(q==last->link)
        {
            cout<<"There are less than"<<pos<<" elements\n";
            return ;
        }
        //creating the new node
        tmp=(NODE)new(struct node);
        tmp->link=q->link;
        tmp->info=num;
        q->link=tmp;
        if(q==last)
            last=tmp;
    }
}
//function to delete a node from the circular linked list
void Circular_Linked::del()
{
    int num;
    if(last==NULL){
        cout<<"\nList underflow\n";
        return;
    }   
    cout<<"\nEnter the number for deletion:";
    cin>>num;

    NODE tmp,q;
    if(last->link==last &&last->info==num)
    {
        tmp=last;
        last=NULL;
    }
}
