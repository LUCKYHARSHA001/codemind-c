#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        int result=sqrt(arr[i]);
        if(arr[i]==result*result)
        {
            sum+=arr[i];
        }
    }
    
    cout<<sum;
}