#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int LA[]={1,3,5,7,8};
int item= 10,k =3,n=5;
int i =0,j=n;

 cout<<"the orginal element are : \n";
 for(i=0;i<n;i++){
cout<<LA[i];
cout<<endl;
 }
 n=n+1;
 while(j>=k){
 	LA[j+1]=LA[j];
 	j=j-1;
 }
 LA[k]=item;
 cout<<"the array element after insertion :\n";
 for(i=0;i<n;i++)
 {
 cout<<LA[i]<<endl;	
 }
}
