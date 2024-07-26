#include<string>
#define STACK_INIT_SIZE 100
#define STACK_INCREMENT_SIZE 10

template<class E>
class mystack{
private:
E* base;
E* top;
int stacksize;
public:
mystack();
!mystack();
void clearstack();
bool stackempty();
int stacklength();
bool gettop(E& e);
void push(E e);
bool pop(E &e);
void stacktransverse();

};
