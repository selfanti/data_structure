#include"internal_sort.h"
#include<iostream>
void internal_sort::insert_sort(int size)
{
    int i,j,temp;
    for(int i=1;i<size;i++)
    {
        temp=data[i];
        for(j=i-1;j>=0&&data[j]>temp;j--)
        {
            data[j+1]=data[j];
        }
        data[j+1]=temp;
    }

}
void internal_sort::input_data(int size)
{
    for(int i=0;i<size;i++)
    {
        std::cin>>data[i];
    }
}
void internal_sort::print(int size){

    for(int i=0;i<size;i++)
    std::cout<<data[i]<<' ';
    std::cout<<std::endl;
}
void internal_sort::shell_sort(int size)
{
    int d,i,j,temp;
    for(d=size/2;d>=1;d=d/2)
    {
        for(i=d;i<size;i++)
        {
            if(data[i]<data[i-d])
            {
                temp=data[i];
                for(j=i-d;j>=0&&data[j]>temp;j-=d)
                {
                    data[j+d]=data[j];
                }
                data[j+d]=temp;
            }
        }
    }
}