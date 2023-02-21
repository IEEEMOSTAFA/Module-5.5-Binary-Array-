#include<bits/stdc++.h>
using namespace std;
//Ortat Memory Complexity O(n)
class Array                              //Class er Memory Complexity O(n)
{
private:
    int *arr;
    int cap;
    int sz;
    void  Increase_size()
    {
        cap=cap*2;
        int *tmp=new int[cap];
        for(int i=0; i<sz; i++)
        {
            tmp[i]=arr[i];

        }
        delete [] arr;
        arr=tmp;
    }
public:
    Array()
    {
        arr=new int[1];
        cap=1;
        sz=0;
    }
    //Time Complexity      Jodi ekta element push kori tobe order hobe      O(1)
    void push_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz] = x;     //Ader Time Complexity O(1)
        sz++;
    }
    //T.C__________O(sz)    Jeheto sz pojjonto input nice
    //So,Ekane o           T.C=O(sz-pos)==O(sz)                               Jeheto wrost case count korbo
    void Insert(int pos,int x) //Insert shikci karon  kono special position a jodi kono special value push korte chai
    {
        if(cap==sz)
        {
            Increase_size();
        }
        // Amra Olta Dik teke korbo Tai         karon  Eta Bad  for(int i=pos;i<sz;i++)
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    void print()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<"\n";
    }
    //Extra Onkso  o O(1)
    int getSize()
    {
        return sz;

    }
    //O(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<"is out of bound !\n";
            return -1;
        }
        return arr[idx];
    }

};
int main()
{
    Array a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.Insert(1,5);           //
    a.print();
    cout<<a.getSize()<<"\n";
    for(int i=0;i<a.getSize();i++)
    {
        cout<< a.getElement(i) <<"\n";
    }
    return 0;
}
