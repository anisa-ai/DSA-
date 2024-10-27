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
cout<<"enter  a number to search in array : ";
cin>>x;
for(i=0;i<n;i++)
{
 if( arr[i]==x){
 	cout<<"element found"<<i;
 	break;
 }
 if( i==n){
 	cout<<"element not found";
 	
}
return 0;
}
}
