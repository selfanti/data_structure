#define MAXSIZE 100
class SqQueue
{   public:
    int data[MAXSIZE];
    int front,rear;
    SqQueue()
    {
        front=0;
        rear=0;
    }
    bool isempty()
    {
        if(front==rear)
        {
            return true;
        }
        else 
        return false;
    }
    bool isfull()
    {
        if((rear+1)%MAXSIZE==front)
        return true;
        else 
        return false;
    }
    bool EnQueue(int val)
    {
        if(isfull())
        return false;
        else{
        data[rear]=val;
        rear=(rear+1)%MAXSIZE;
        return true;
        }

    }
    bool DeQueue(int& val)
    {
        if(isempty())
        return false;
        else{
            val=data[front];
            front=(front+1)%MAXSIZE;
            return true;
        }
    }
    
};