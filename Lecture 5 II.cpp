#include <iostream>
using namespace std;
int main(){
int a[9];

int i;

cout<<"GIve 5 integers as input"<<endl;

for (i=0;i<10; i++)
{
cin>>a[i];
}
cout<<"The 5 given inputs are: "<<endl;
for (i=9;i>=0; i--)
{
cin>>a[i];
}

return 0;
}