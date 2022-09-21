#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int x,Size=0,r;
cout<<"Enter the value of x"<<endl;
cin>>x;
int y=x;
while(x)
{
 r=x%10;
 Size++;
 x=x/10;
}
if(y>=0)
{
 int arr[Size];
 for(int i=0;i<Size;i++)
 {
  arr[i]=y%10;
  y=y/10;
 }
 int i,j;
 for(i=Size-1,j=0;i>=0&&j<Size;i--,j++)
 {
  if(arr[i]!=arr[j])
     break;

 }
 if(i<0&&j==Size)
    cout<<"true"<<endl;
 else
    cout<<"false"<<endl;
}
else
{
  cout<<"false"<<endl;
}


return 0;
}
