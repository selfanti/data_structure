#include <iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

void sever(string str1,string str2)
{
    int n=str1.size();
    int i=0;
    int k=0;
    string temp;
    do{
        ++i;
        temp=str1.substr(i,1);
        if(temp=="(") ++k;
        else if(temp==")") --k;
    }while(i<n&&(temp!=","||k!=0));
    if(i<n)
    {
        str2=str1.substr(1,i-1);
        str1=str1.substr(i+1,n-i);
    }
    else{
        str2=str1;
        str1.clear();
    }
    cout<<str2<<endl;
}
int main(int argc, char** argv)
{
    cout << "hello world!" << endl;
    string str1,str2;
    cin>>str1;
    sever(str1,str2);
    unordered_map<int,int> hash1;
    return 0;
}
