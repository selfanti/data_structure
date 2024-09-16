#include <iostream>
#include"linked_list.h"
using namespace std;

void print(int);
int main(int argc, char** argv)
{   
    LinkedList list;
    list.ListInsert(2,12);
    list.ListTransverse(print);
    return 0;
}
