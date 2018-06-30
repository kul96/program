#include <bits/stdc++.h>
using namespace std;
int isvalid1(int arr[],int k,int d){
   for(int i=0;i<d;i++){
     if(arr[i]==k)
        return 0;
   }
return 1;

}

void auxper1(int arr[],int n,int d){
 if(d==n){
     for(int i=0;i<n;i++){
        char a=arr[i]+97;
        cout<<a<<" ";
     }cout<<endl;
     return ;
 }
 for(int i=0;i<n;i++){
     if(isvalid1(arr,i,d)){
        arr[d]=i;
        auxper1(arr,n,d+1);
     }
  }
}

void per1(int n){
   int arr[n];
   auxper1(arr,n,0);
}
int main()
{    int n;
     cout<<"enter the no \n";
     cin>>n;
     per1(n);
    return 0;
}
