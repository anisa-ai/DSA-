#include<iostream>
using namespace std;
void value(int &x){
x=20;		
}
int main()
{
int num=10;
cout<<"before"<<num;
value(num);
cout<<endl<<"after"<<num;
return 0;
}
