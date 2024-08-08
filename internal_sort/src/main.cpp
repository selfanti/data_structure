#include "internal_sort.h"
#include<iostream>
//using namespace std;

int main(int argc, char** argv)
{   internal_sort sort;
    sort.input_data(10);
    std::cout<<"排序前"<<std::endl;
    sort.print(10);
    sort.shell_sort(10);
    std::cout<<"排序后"<<std::endl;
    sort.print(10);
    return 0;

}
