#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[100] , n , val1=INT_MIN , val2=INT_MIN ;
  cout<<"enter the size : (size should be 0 < n <= 200 )";
  cin>> n;
  for(int  i=0 ; i<n ; i++)
    cin>> arr[i];
  for(int i=0 ; i<n ; i++)
  {
    if(arr[i]>val1)
    {
      val2=val1;
      val1=arr[i];
    }
    else if(arr[i]>val2 && arr[i]!=val1)
      val2=arr[i];
  }
  cout<<"second minimum is : ";
  cout<<val2;

}

