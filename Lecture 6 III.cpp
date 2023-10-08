#include <iostream>
using namespace std;
int main(){
     int i;
    // while(i<101){
    //     cout<<i<<" ";
    //     i++;
    // }
    i=100;
    int input;
    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input==65)
        {
            cout<<"you have gussed correct. ";
            break;
        }
    }
}