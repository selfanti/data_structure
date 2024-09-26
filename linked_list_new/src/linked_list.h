class LNode{
public:
    int data;
    LNode* next;
LNode(int val){
    data=val;
    next=nullptr;
};
LNode(){};

};
class LinkList{
private:
LNode* head;
LNode* tail;
int len;

public:
LinkList();
~LinkList();
void ClearList();
bool InsFirst(LNode *);
bool DelFirst(LNode *);
bool Append(LNode *);
bool Append_val(int);
bool Remove(LNode *);
bool InsBefore(LNode*,LNode*);
bool InsAfter(LNode*,LNode*);
bool SetCurElem(LNode*,int);
int GetCurElem(LNode*);
bool ListEmpty();
int ListLength();
LNode* GetHead();
LNode* GetLast();
LNode* PriorPos(LNode*);
LNode* NextPos(LNode*);
bool LocatePos(LNode*,int);
LNode* LocateElem(bool fun(int,int),int);
bool ListTransverse(void fun(LNode*));


};