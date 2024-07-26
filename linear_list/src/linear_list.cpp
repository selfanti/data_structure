#include"linear_list.h"
template<class E>
class linear_list{
linear_list(){
E* BaseAddr=new E[LIST_INIT_SIZE];
int listsize=LIST_INIT_SIZE;
int length=0;
}
!linear_list(){
delete [] BaseAddr;
listsize=0;
length=0;
}
void linear_list<E>::clearlist(){
listsize=0;
length=0;

}
bool listempty(){
    if(length==0)
    return true;
    else 
    return false;
}
int listlength(){
    return length;
}
E getelem(int offset){
    return *(BaseAddr+offset);
}
int locateelem(E value){
    for(int i=0;i<length;i++)
    {
        if(*(BaseAddr+i)==value)
        return i+1;
    }
    return 0;
}
E priorelem(E){
    
}
E nextelem(E);
void listinsert(E);
E listdelete(int);
void union(linear_list);
void merge(int low,int mid,int high)
{
    int i=low;
    int j=high;
    std::vector<E> aux;
    for(int i=0;i<data.size();i++)
    {
        aux.push_back(data[i]);
    }
    for(int k=low;k<high;k++)
    {
        if(i>mid) data[k]=aux[j++];
        else if(j>high) data[k]=aux[i++];
        else if(compare(1,aux[i],aux[j])) data[k]=aux[i++];
        else if(!compare(1,aux[i],aux[j])) data[k]=aux[j++];
    }
}
};