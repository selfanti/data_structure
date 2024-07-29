#include <iostream>
#include"binary_tree.h"




int main(int argc, char** argv)
{
    Binary_Tree T;
    T.CreateBiTree(T.GetRoot());
    std::cout<<T.CountLeaf(T.GetRoot());
    return 0;
}
