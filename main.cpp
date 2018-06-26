#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fabo1(int n){
  if(n==2 || n==1){
    return 1;
  }
  return fabo1(n-1)+fabo1(n-2);
 }
int fabo2(int n){
   int a=1,b=1,c;
   for(int i=3;i<=n;i++){
     c=a+b;
     a=b;
     b=c;
   }return c;
}
int fabo3(int n){
   //int a=1,b=1,c;
   int arr[n];
   arr[1]=1,arr[2]=1;
   for(int i=3;i<=n;i++){
     arr[i]=arr[i-1]+arr[i-2];
   }return arr[n];
}
int fabo4(int n,int brr[]){
    if(n<=2)return 1;
    brr[n]=fabo4(n-1,brr)+fabo4(n-2,brr);
    return brr[n];
}
int main()
{
    int n;
    //int arr[n]={0};
    cout<<"enter the no\n";
    cin>>n;
    int brr[n];
    int a=fabo4(n,brr);
    cout<<a;
    //cout<<fabo1(n)<<" \n";
    //cout<<fabo2(n)<<" \n";
    //cout<<fabo3(n,arr)<<"\n";
    return 0;
}
