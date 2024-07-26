#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

template<class E>
class linear_list{
private:
E* BaseAddr;
int listsize;
int length;
linear_list();
!linear_list();
public:

void clearlist();
bool listempty();
int listlength();
E getelem(int);
int locateelem(E);
E priorelem(E);
E nextelem(E);
void listinsert(E);
E listdelete(int);
void union(linear_list);
void merge(int ,int ,int);
};