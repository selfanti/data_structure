#include <iostream>
#include"binary_tree.h"

void print(BiTNode *tempNode){
    std::cout<<" "<<tempNode->getdata()<<" ";
};


int main(int argc, char** argv)
{
    Binary_Tree T;
    T.CreateBiTree(T.GetRoot());
    std::cout<<T.CountLeaf(T.GetRoot());
    T.LevelOrderTraverse(T.GetRoot(),print);
    T.PostOrderTraverse(T.GetRoot(),print);
    return 0;
}
