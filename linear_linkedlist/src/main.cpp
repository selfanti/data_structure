#include <iostream>
#include"linked_list.h"
using namespace std;

void print(int);
int main(int argc, char** argv)
{   
    LinkedList list;
    list.ListInsert(1,12);
    list.ListTransverse(print);
    int temp;
    if(list.GetItem(2,temp))
    print(temp);
    cout << "hello world!" << endl;
    return 0;
}
