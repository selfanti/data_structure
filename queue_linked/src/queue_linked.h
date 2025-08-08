//带头节点的链式队列实现
template<class T>
class LinkNode{
    public:
    T data;
    LinkNode* next;
    LinkNode(){};
    LinkNode(T val){data=val;next=nullptr;};
};
template<class T>
class Queue_linked
{
    LinkNode<T> *rear,*front;
    public:
    Queue_linked()
    {   

        front=new LinkNode<T>;  
        rear=front;         //front和rear都指向头节点，此时队列为空
        front->next=nullptr;
    };
    void EnQueue(T val)  //链式队列不会满
    {
        auto node=new LinkNode<T>(val);
        rear->next=node;
        rear=rear->next;
    }
    bool DeQueue(T &val)
    {   
        if(isempty())
        return false;
        else
        {   
            auto temp=front->next; //front是头节点指针
            val=temp->data;
            front->next=temp->next;
            delete temp;
            if(front->next==nullptr)
            rear=front;
            return true;
        }

    }
    bool isempty()
    {
        if(rear==front)
        return true;
        else
        return false;
    };



};