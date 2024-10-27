#include<iostream>
using namespace std;
int main()
{
	int arr[3]={1,2,3};
	cout<<"orginal array";
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
cout<<endl;
int index,newValue;
cout<<" enter the index you want go update";
cin>>index;
if(index <0|| index <=3)
{
cout<<" invalid index";
return 1;
}
cout<<"ente the new value";
cin>>newValue;
arr[index]=newValue;
cout<<"updated index";
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
