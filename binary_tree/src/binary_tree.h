#include<iostream>
#include<stdexcept>

class BiTNode{

    char data;
    BiTNode *lchild, *rchild;
public:
int getdata(){
    return data;
}
BiTNode *getlchild(){
    return lchild;
}
BiTNode * getrchild(){
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
void CreateBiTree(BiTNode* );
bool PreOrderTraverse(void f(void));
void print(BiTNode *);
bool InOrderTraverse(void f(void));
bool PostOrderTraverse(void f(void));
void LevelOrderTraverse(void f(void));
int CountLeaf(BiTNode*);
BiTNode* GetRoot();
};