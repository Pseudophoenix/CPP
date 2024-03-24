template<class T>class node{
    public:
    // T info;
    T data;
    node*next;
};
template<class T> class LList{
    private:node<T> *head;
    public:
    LList(){
        head=NULL;
    }
    ~LList();
    int isEmpty();
    void traverseInOrder();
    void traverseReverseOrder();
    static void traverseReverseRecursive(node<T> *);
    void insertAtBeginning(T item);
    void insertAtEnd(T item);
    void insertAfterElement(T item,T after);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteElement(T element);
    void deleteAfterElement(T after);
    void reverseList();
    node*searchInUnsortedList(T item);
};
template<typename T>void LList<T>::traverseInOrder()
{
    node<T> *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<" "<<ptr->info;
        ptr=ptr->next;
    }
}
template<class T> void LList<T>::traverseReverseOrder(){
    traverseReverse(head);
}
template<class T> void LList<T>::traverseReverseRecursive(node<T> *ptr)
{
    it(ptr->next!=NULL)
    {
        traverseReverse(ptr->next);

    }
    cout<<" "<<ptr->info;
}
// template<typename T> 
// node LList<T>::*searchInUnsortedList(T item)
// {
//     node<T> *ptr;
//     ptr=head;
//     while((ptr!=NULL)&&(ptr->info!=item))
//     ptr=ptr->next;
//     return ptr;
// }
// template<class T>node::*searchInSortedList(T item)
// {
//     node<T> *ptr;   
//     ptr=head;
//     while(ptr!=NULL)
//     {
//         if(ptr->info==item)
//         return ptr;
//         else if(item<ptr->info)
//         return NULL;
//         else
//         ptr=ptr->next;

//     }
//     return NULL;
// }
template<class T>
void LList<T>::insertAtBeginning(T item)
{
    node<T>*ptr;
    ptr=new node<T>;
    ptr->info=item;
    if(head==NULL)
    ptr->next=NULL;
    else
    ptr->next=head;
    head=ptr;
}
template<class T>
void LList<T>::insertAtEnd(T item)
{
    node<T> *ptr, *loc;
    ptr=new node<T>;
    ptr->info=item;
    ptr->next=NULL;
    if(head==NULL)
    head=ptr;
    else{
        loc=head;
        while(loc->next!=NULL)
        loc=loc->next;
        loc->next=ptr;
    }
}
template<class T>void LList<T>:: insertAfterElement(T item, T after)
{
    node<T> *ptr1, *ptr2;
    ptr1=head;
    while(ptr1!=NULL)
    {
        if(ptr1->info==after)
        break;
        ptr1=ptr1->next;
    }
    if(ptr1==NULL)
    {
        cout<<"\n\nelement "<<after<<" not found\n\n";
        return ;
    }
    ptr2=new ndoe<T>;
    ptr2->info=item;
    ptr2->nect=ptr1->next;
    ptr1->next=ptr2;
};
template<class T>
void LList<T>::deleteFromBeginning()
{
    node<T> *ptr;
    if(head==NULL)
    return;
    else{
        ptr=head;
        head=head->next;
        delete ptr;
    }
}
template<class T> void LList<T>::deleteFromEnd()
{
    node<T> *ptr,*loc;
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        ptr=head;
        head=NULL;
        delete ptr;
    }
    else {
        loc=head;
        ptr=head->next;
        while(ptr->next!=NULL)
        {
            loc=ptr;
            ptr=ptr->next;
        }
        loc->next=NULL;
        delete ptr;
    }
}
template<class T>
void LList<T>::deleteAfterElement(T after)
{
    node<T> *ptr1, *ptr2;
    ptr1=head;
    while(ptr1!=NULL){
        if(ptr1->info==after)
        break;
        ptr1=ptr1->next;
    }
    if(ptr1==NULL)
    {
        cout<<"\n\nelement "<<after<<" not found\n\n";
        return;
    }
    ptr2=ptr1->next;
    ptr1->next=ptr2->next;
    deleter ptr2;
}
template<class T> void LList<T>::deleteElement(T item)
{
    node<T> *loc,*ploc=NULL;
    loc=head;
    while((loc->info!=item) && loc!=NULL)
    {
        ploc=loc;
        loc=loc->next;
    }
    if(loc->info==item)
    {
        ploc->next=loc->next;
        delete loc;
    }
}
template<class T> void LList<T>::reverseList()
{
    node<T> *prevNode,*currNode, *nextNode;
    currNode=head;
    nextNode=currNode->next;
    prevNode=currNode->next=NULL;
    while(nextNode!=NULL)
    {
        prevNode=currNode;
        currNode=nextNode;
        nextNode=currNode->next;
        currNode->next=prevNode;
    }
    head=currNode;
}
