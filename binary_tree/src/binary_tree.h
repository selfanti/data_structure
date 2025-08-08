#include<iostream>
#include<stdexcept>

class BiTNode{

    char data;
    BiTNode *lchild, *rchild;
public:
BiTNode(char temp){
    data=temp;
    lchild=NULL;
    rchild=NULL;
}
char getdata(){
    return data;
}
BiTNode* &getlchild(){
    return lchild;
}
BiTNode* & getrchild(){
    return rchild;
}
void assigndata(char temp){
    data=temp;
}
void assignLchild(BiTNode * p1){
    lchild=p1;
}
void assignRchild(BiTNode * p2){
    rchild=p2;
}
};
class Binary_Tree{
 BiTNode* root;
public:
Binary_Tree();
void CreateBiTree(BiTNode* &T);
bool PreOrderTraverse(BiTNode* T,void f(BiTNode *tempNode));
void print(BiTNode *);
bool InOrderTraverse(BiTNode* T,void f(BiTNode *tempNode));
bool PostOrderTraverse(BiTNode* T,void f(BiTNode *tempNode));
void LevelOrderTraverse(BiTNode* T,void f(BiTNode *tempNode));
int CountLeaf(BiTNode*);
BiTNode* &GetRoot();
};