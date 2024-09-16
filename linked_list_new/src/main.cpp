#include <iostream>
#include"linked_list.h"

void print(LNode* p)
{
    std::cout<<"The value of this node: "<<p->data<<std::endl;
}
bool compare(int val1,int val2)
{
    if(val1==val2)
    return true;
    else
    return false;
}
int main(int argc, char** argv)
{   
    LinkList list1;
    for(int i=0;i<100;i++)
    {
    list1.Append_val(i);
    }
    list1.ListTransverse(print);
    auto p=list1.LocateElem(compare,87);
    list1.Append(p);  //成环
    list1.ListTransverse(print);


    std::cout << "finish" << std::endl;
    return 0;
}
