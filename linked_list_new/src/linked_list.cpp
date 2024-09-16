#include"linked_list.h"
#include<iostream>
LinkList::LinkList(){
    head=new LNode;
    tail=head;
    len=0;
};
LinkList::~LinkList()
{
    auto p=head;
    LNode* temp;
    while(p!=nullptr)
    {   temp=p->next;
        delete p;
        p=temp;
    }

};
void LinkList::ClearList(){
    auto p=head->next;
    LNode* temp;
    while(p!=nullptr)
    {   temp=p->next;
        delete p;
        p=temp;
    }
    tail=head->next;
    len=0;
}
bool LinkList::InsFirst(LNode* p)
{
    auto temp=head->next;
    head->next=p;
    p->next=temp;
    len++;
    return true;
}
bool LinkList::DelFirst(LNode *p)
{   if(!ListEmpty())
    {
    p=head->next;
    head->next=p->next;
    len--;
    return true;
    }
    else
    {
        std::cerr<<"ERROR: Empty List!"<<std::endl;
        return false;
    }
}
bool LinkList::ListEmpty()
{
    if(len!=0)
    {
        return false;
    }
    else
    return true;
}
bool LinkList::Append(LNode *p)
{
    tail->next=p;
    tail=p;
    len++;
    return true;
}
bool LinkList::Append_val(int val)
{
    auto temp=new LNode(val);
    Append(temp);
    return true;
}
bool LinkList::Remove(LNode *p)
{
    auto prior=PriorPos(p);
    delete p;
    tail=prior;
    len--;
    return true;
}
bool LinkList::InsBefore(LNode* p_now,LNode* p_to_insert)
{   
    PriorPos(p_now)->next=p_to_insert;
    p_to_insert->next=p_now;
    len++;
    return true;
}
bool LinkList::InsAfter(LNode* p_now,LNode* p_to_insert)
{
    p_to_insert->next=NextPos(p_now);
    p_now=p_to_insert;
    len++;
    return true;
}
bool LinkList::SetCurElem(LNode* p,int val)
{   if(p!=nullptr)
    {
    p->data=val;
    return true;
    }
    else 
    return false;
}
int LinkList::GetCurElem(LNode* p)
{   if(p!=nullptr)
    {
        return p->data;
    }
    else
    std::cerr<<"Node doesn't exist!"<<std::endl;
}

LNode* LinkList::GetHead()
{
    return head;
}
LNode* LinkList::GetLast()
{
    return tail;
}
LNode* LinkList::PriorPos(LNode *p)
{   if(!ListEmpty())
    {
    for(auto temp=head;temp!=nullptr;temp=temp->next)
    {
        if(temp->next==p)
        {
            return temp;
        }
    }
    }
    else
    {
        std::cerr<<"ERROR: Empty List!"<<std::endl;
        return nullptr;
    }
}
LNode* LinkList::NextPos(LNode *p)
{
    if(p!=tail)
    return p->next;
    else
    {
        std::cerr<<"ERROR: There is no next posotion for the last node!"<<std::endl;
        return nullptr;
    }
}
int LinkList::LinkList::ListLength()
{
    return len;
}
bool LinkList::LocatePos(LNode* p,int i)
{
    if(i>=0&&i<=len)
    {   auto temp=head;
        while(i>0)
        {
            temp=temp->next;
            i--;
        }
        p=temp;
        return true;
    }
    else
    {
        std::cerr<<"ERROR: Wrong number of input"<<std::endl;
        return false;
    }
}
LNode* LinkList::LocateElem(bool compare(int,int),int val)
{
    auto p=head;
    while(p->next!=nullptr)
    {
        if(compare(p->next->data,val))
        return p->next;
        p=p->next;
    }
    std::cout<<"Can't find"<<std::endl;
    return nullptr;
}
bool LinkList::ListTransverse(void print(LNode*))
{
    auto p=head;
    while(p->next!=nullptr)
    {
        print(p->next);
        p=p->next;
    }
    return true;
}


