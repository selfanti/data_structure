#define MAXSIZE 100
 
class internal_sort{

private:
int data[MAXSIZE];
int size;

public:
//some tool functions
void swap(int,int);
void print(int);
void input_data(int);
int partition(int,int);

//some sort algorithms
void insert_sort(int);
void shell_sort(int);
void bubble_sort(int);
void quick_sort(int,int);
void select_sort(int);
void heap_sort(int);
void merge_sort(int);
};