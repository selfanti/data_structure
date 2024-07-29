#include"binary_tree.h"

class Binart_Tree{   

    BiTNode* root;                  
public:
void CreateBiTree(BiTNode* T){
    char ch;
    std::cin>>ch;
    if(ch==' ') T=NULL;
    else{
        T->assigndata(ch);
        CreateBiTree(T->getlchild());
        CreateBiTree(T->getrchild());
    }

};
void print(BiTNode *tempNode){
    std::cout<<" "<<tempNode->getdata()<<" ";
};

bool PreOrderTraverse(BiTNode* T,void f(BiTNode *tempNode)){
    if(T==NULL) return true;
    else{
        f(T);
        PreOrderTraverse(T->getlchild(),f);
        PreOrderTraverse(T->getrchild(),f);
    }
};

bool InOrderTraverse(void f(void)){

};
bool PostOrderTraverse(void f(void)){

};
void LevelOrderTraverse(void f(void)){

};
/*
先序顺序计算叶节点数量
*/
int CountLeaf(BiTNode* T){    
    static int count=0;
    
    if(T)
    {
        if(T->getlchild()&&T->getrchild())
        {
            count++;
        }
        CountLeaf(T->getlchild());
        CountLeaf(T->getrchild());
    }
    return count;
}
BiTNode* GetRoot(){
    return root;
}

};