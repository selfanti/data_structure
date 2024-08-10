#define MAXSIZE 100
 
class internal_sort{

private:
int data[MAXSIZE];
int size;
public:
void swap(int,int);
void print(int);
void input_data(int);
int partition(int,int);

void insert_sort(int);
void shell_sort(int);
void bubble_sort(int);
void quick_sort(int,int);

};