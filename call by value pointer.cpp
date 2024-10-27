#include<iostream>
using namespace std;
void value(int x){
x=20;		
}
int main()
{
int num=10;
cout<<num;
value(num);
cout<<endl<<num;
return 0;
}
