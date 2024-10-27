#include<iostream>
using namespace std;
int main()
{
int arr[10],x,n,i;
cout<<"enter size of array : ";
cin>>n;
cout<<"enter element of array : ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter  a number to insert in array : ";
cin>>x;
for(i=n;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=x;
n++;
cout<<" array element are : ";
for(i=0;i>n;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}

