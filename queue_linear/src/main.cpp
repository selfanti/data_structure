#include <iostream>
#include"queue_linear.h"


int main(int argc, char** argv)
{
    SqQueue q1;
    int val;
    for(int i=0;i<90;i++)
    q1.EnQueue(i);
    for(int i=0;i<90;i++)
    {
    q1.DeQueue(val);
    std::cout<<val<<std::endl;
    }
    return 0;
}
