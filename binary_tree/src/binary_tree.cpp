#include"binary_tree.h"

class Binart_Tree{   
public:
    BiTNode* root;                  

void CreateBiTree(){
    char ch;
    std::cin>>ch;
    if(ch==' ') throw std::invalid_argument("invalid input");
    else{
        root->assigndata(ch);
        root->assignLchild(new BiTNode);
        root->assignRchild(new BiTNode);

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

};