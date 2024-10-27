#include<iostream>
using namespace std;
int main()
{
int arr[10],x,i,n;
cout<<"enter size of array"	;
cin>>n;
cout<<"enter element of array"	;
for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=0;i<n;i++){
	arr[i]=arr[i+1];
}
n--;
cout<<"array after deletetion";
for(i=0;i<n;i++){
	cout<<arr[i]<<endl;
}
return 0;
}


