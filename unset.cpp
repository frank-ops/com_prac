 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int pos,n,k;
     cin>>n;
     k=n;
     cin>>pos;
     n=(n>>(pos-1))&1;
     if(n)
        k=k^(1<<(pos-1));
    cout<<k;
 }