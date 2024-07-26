#include<iostream>
#define MAXSIZE 12500
template<class E>
class Triple{
    int i,j;
    E e;
public:
Triple(int m,int n,E elem){
        i=m;
        j=n;
        e=elem;
    }
void print(void)
{
    std::cout<<'('<<i<<','<<j<<','<<e<<')'<<std::endl;
}

};
template<class E>
class TSmatrix{
private:
    Triple<E> data[MAXSIZE+1]; //data[0]不使用
    int mu,nu,tu;
public:

 TSmatrix transpose(){
    TSmatrix var;
    var.mu=nu;
    var.nu=mu;
    var.tu=tu;
    int q=1;
    for(int col=1;col<nu;col++)
    {
        for(int p=1;p<tu;p++)
        {
            if(data[p].j==col)
            {
                var.data[q].j=data[q].i;
                var.data[q].i=data[q].j;
                var.data[q].e=data[q].e;
                q++;
            }
        }
    }
    return var;

}

};