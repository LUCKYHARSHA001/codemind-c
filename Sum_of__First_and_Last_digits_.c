#include <iostream>
using namespace std;
int main()
{
    int i,x;
    cin>>x;
    i=x%10;
    while(x>=10)
    {
        x=x/10;
    }
    cout<<x+i;    
   
}