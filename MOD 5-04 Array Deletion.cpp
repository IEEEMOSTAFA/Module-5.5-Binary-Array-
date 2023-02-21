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
    void Insert(int pos,int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        // Amra Olta Dik teke korbo Tai  Eta Bad  for(int i=pos;i<sz;i++)
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
    //sz=cap/2;  cap=cap/2;
    //Jodi amra last element delete korte chai taile
    //O(1)
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"Current Size is 0\n";
            return ;
        }
        sz--;
//O(sz)
}
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"position doesn't exit .\n";
            return;
        }
        for(int i=pos+1;i<sz;i++)
        {
            arr[i-1]=arr[i];
            //swap(arr(i-1),arr[i]);
        }
        sz--;
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
   // cout<<a.getSize()<<"\n";
    //for(int i=0;i<a.getSize();i++)
    //{
    //    cout<< a.getElement(i) <<"\n";
//}
a.Pop_back();
a.print();
a.Pop_back();
a.print();


a.Erase(1);
a.print();
return 0;

}



