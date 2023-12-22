#include<iostream>
using namespace std;
int main()
{
    char a[25]="haZIm     anSARi";
    if(a[0]>=97 && a[0]<=122)
    a[0]=a[0]-32;
    cout<<a[0];
    for(int i=1;i<=25;i++)
    {
       if(a[i]==' ' && a[i+1]>=97 && a[i+1]<=122)
       {
        a[i+1]=a[i+1]-32;
       }
        if(a[i]>=65 && a[i]<=90)
        {
           a[i]=a[i]+32;    
        }
        cout<<a[i];
       if(a[i]==' ')
       {
        i++;
        cout<<a[i];
       }
      
    
    }
}