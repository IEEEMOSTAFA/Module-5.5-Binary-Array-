//This program is not correct .You should recover it
#include<bits/stdc++.h>
using namespace std;
void Print_Union(int a1[],int a2[],int n,int m)
{
    int i,j,f,k=0;
    vector<int>a3(n);
    for(int i=0;i<n;i++)
    {
        a3[k]=a1[i];
        k++;
    }
    for(int i=0;i<m;i++)
    {
        f=0;
        for(int j=0;j<n;j++)
        {
            if(a2[i]==a1[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            a3[k]=a2[i];
            k++;
        }
    }
    cout<<"Union Array is:::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a3[i]<<" ";
    }
}
int main()
{

int i,j,a1[100],a2[100],n,m;
cout<<"Enter the size of ist Array";
cin>>n;
//vector<int>a1(n);
cout<<"Enter the Element of the Ist Array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a1[i];

}
cout<<"Enter the size of 2nd Array";
cin>>m;
//ector<int>a2(m);
cout<<"Enter the Element of the 2nd Array"<<endl;
for(int i=0;i<m;i++)
{
    cin>>a2[i];

}
Print_Union(a1,a2,n,m);
//Print_Intersection(a1,a2,n,m);
return 0;
}
