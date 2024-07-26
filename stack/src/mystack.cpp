#include "mystack.h"


template<class E>
class mystack{
private:
E* base;
E* top;
int stacksize;
public:
mystack(){
    top=new double[STACK_INIT_SIZE];
}
void destroystack();
void clearstack();
bool stackempty();
int stacklength();
bool gettop(E& e);
void push(E e);
bool pop(E &e);
void stacktransverse();

};