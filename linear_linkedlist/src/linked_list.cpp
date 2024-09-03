#include"linked_list.h"
#include<iostream>
bool equal(int i,int j)
{
    if(i==j)
    return true;
    else 
    return false;
}
void print(int e){
    std::cout<<e<<std::endl;
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
        i--;
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
        return i; //第一个出现的位置
        p=p->next;
        i++;

    }
    return 0; //返回值为0表示链表内无该元素

}
bool LinkedList::PriorElem(int i,int& e){
    if(ListEmpty())
    {
    std::cerr<<"ERROR: Empty list"<<std::endl;
    return false;
    }
    else
    {
    if(i<=1)
    {
        std::cerr<<"ERROR: first input should be larger than 1"<<std::endl;
        return false;
    }
    else{
    ListNode* p1=head;
    while(i>1)
    {
        p1=head->next;
        i--;
    }
    e=p1->data;
    return true;

    }
    }
}
bool LinkedList::NextElem(int i,int &e)
{   if(ListEmpty())
    {
        std::cerr<<"ERROR: Empty list"<<std::endl;
        return false;
    }
    else
    {
    auto p=head;
    while(i>0)
    {   if(p->next=nullptr)
        {
            std::cerr<<"ERROR: out of range"<<std::endl;
            return false;
        }
        p=p->next;
        i--;
    }
    e=p->next->data;
    return true;
    }
}
void LinkedList::ListInsert(int i,int e)
{   
    auto p=head;
    while(i>1)
    {   
        p=p->next;

    }
    auto Node_p=new ListNode;
    Node_p->data=e;
    Node_p->next=p->next;
    p->next=Node_p;

}
void LinkedList::ListDelete(int i,int &e)
{
    if(ListEmpty())
    std::cerr<<"ERROR: Empty list"<<std::endl;
    else{
        auto p=head;
        while(1);
    }
}
void LinkedList::ListTransverse(void print(int)){
;
}