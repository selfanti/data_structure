#include <iostream>
#include <string>
#include<fstream>
#include<vector>
template<class E>
class mergesort{
private:
std::vector<E> data;
public:

bool compare(bool ord,E a,E b)
{
    //升序
    if(ord==1)
    {
        if(a<=b)
        return true;
        else return false;
    }
    //降序
    else if(ord==0)
    {
        if(a>=b)
        return true;
        else return false;
    }
    else std::cout<<"未指定比较方式"<<std::endl;
}
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
