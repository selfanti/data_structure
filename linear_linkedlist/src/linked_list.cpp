#include"linked_list.h"
#include<iostream>
bool equal(int i,int j)
{
    if(i==j)
    return true;
    else 
    return false;
}
LinkedList::LinkedList(){
    head=new ListNode;
    head->next=nullptr;
}
LinkedList::~LinkedList(){
    ListNode* p=head;
    while(p->next!=nullptr)
    {   head=head->next;
        delete p;
        p=head;
    }
    delete p;
}
void LinkedList::ClearList(){
        ListNode* p=head;
    while(p->next!=nullptr)
    {   head=head->next;
        delete p;
        p=head;
    }
}
bool LinkedList::ListEmpty(){
    if(head->next==nullptr)
    return true;
    else return false;
}
int LinkedList::ListLength(){
    int i=0;
    auto p=head;
    while(p->next!=nullptr)
    i++;
    return i;
}
bool LinkedList::GetItem(int i,int& e){
    auto p=head;
    while(i>0)
    {   if(p->next!=nullptr)
        p=p->next;
        else
        {
        std::cout<<"GetItem: out of range"<<std::endl;
        return false;
        }
    }
    e=p->data;
    return true;
}
int LinkedList::LocateItem(int e,bool equal(int,int))
{
    auto p=head;
    int i=1;
    while(p->next!=nullptr)
    {
        if(equal(p->next->data,e))
        return i;
        p=p->next;
        i++;

    }
    return 0;

}
bool LinkedList::PriorElem(int i,int& e){
    ListNode* p1,p2;
}
