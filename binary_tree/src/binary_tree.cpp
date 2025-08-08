#include"binary_tree.h"
#include"../../queue_linked/src/queue_linked.h"

void Binary_Tree::CreateBiTree(BiTNode* &T){
    char ch;
    std::cin>>ch;
    if(ch=='q') T=NULL;
    else{
        T=new BiTNode(ch);
        CreateBiTree(T->getlchild());
        CreateBiTree(T->getrchild());
    }

};
Binary_Tree::Binary_Tree(){
    root=NULL;
}
void Binary_Tree::print(BiTNode *tempNode){
    std::cout<<" "<<tempNode->getdata()<<" ";
};

bool Binary_Tree::PreOrderTraverse(BiTNode* T,void f(BiTNode *tempNode)){
    if(T==NULL) return true;
    else{
        f(T);
        PreOrderTraverse(T->getlchild(),f);
        PreOrderTraverse(T->getrchild(),f);
    }
    return true;
};

bool Binary_Tree::InOrderTraverse(BiTNode* T,void f(BiTNode *tempNode)){
    if(T==NULL) return true;
    else{
        InOrderTraverse(T->getlchild(),f);
        f(T);
        InOrderTraverse(T->getrchild(),f);
    }
    return true;
};
bool Binary_Tree::PostOrderTraverse(BiTNode* T,void f(BiTNode *tempNode)){
    if(T==NULL) return true;
    else{
        PostOrderTraverse(T->getlchild(),f);
        PostOrderTraverse(T->getrchild(),f);
        f(T);
    }
    return true;
};
void Binary_Tree::LevelOrderTraverse(BiTNode* T,void f(BiTNode *tempNode)){
    if(T==NULL) return;
    Queue_linked<BiTNode*> Q;
    BiTNode *p;
    Q.EnQueue(T);
    while(!Q.isempty())
    {
        Q.DeQueue(p);
        f(p);
        if(p->getlchild()!=nullptr)
        Q.EnQueue(p->getlchild());
        if(p->getrchild()!=nullptr)
        Q.EnQueue(p->getrchild());
    }

};
/*
先序顺序计算叶节点数量
*/
int Binary_Tree::CountLeaf(BiTNode* T){    
    static int count=0;
    
    if(T)
    {
        if(T->getlchild()==NULL&&T->getrchild()==NULL)
        {
            return 1;
        }
        return CountLeaf(T->getlchild())+CountLeaf(T->getrchild());
    }
    return count;
}
BiTNode* &Binary_Tree::GetRoot(){
    return root;
}

