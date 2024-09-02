class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int val){
        data=val;
        next=nullptr;
    }
    ListNode(){};
};
class LinkedList{
    private:
    ListNode* head;
    public:
    LinkedList();
    ~LinkedList();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetItem(int,int&);
    int LocateItem(int,bool compare(int,int));
    bool PriorElem(int,int&);
    bool NextElem(int,int&);
    void ListInsert(int,int);
    void ListDelete(int,int&);
    void ListTransverse(void visit(int));
};