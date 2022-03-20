#include <iostream>
using namespace std;



void passbyvalue(int x,int y);
{
    int z=x;
    x=y;
    y=x;
}
int main(){
    int a=5,b=7;
cout<<"before swapping"<<endl<<a << endl <<b;


cout<<"before swapping"<<endl<<a << endl <<b;
}