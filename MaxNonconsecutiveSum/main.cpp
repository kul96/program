#include<bits/stdc++.h>
using namespace std;
//using recursion ----------------
int auxsum1(int arr[],int n){
      if(n==0)
        return 0;
     if(n==1)
        return arr[n-1];

    int ex=auxsum1(arr,n-1);
    int in=auxsum1(arr,n-2) + arr[n-1];
    return max(ex,in);
}
//using DP with no recursion ---------------
int auxsum2(int arr[],int n){
    int m[n]={0};
      m[0]=0;
      m[1]=arr[1];
   for(int i=2;i<=n;i++){
    int ex=m[i-1];
    int in=m[i-2] + arr[i-1];
    m[i] =max(ex,in);
    }
    return m[n];
}
//use method same as Fibonacci
 int auxsum3(int arr[],int n){
  int in=arr[0];
  int ex=0;
  int c;
  for(int i=1;i<n;i++){
    c=max(in,ex);
    in=ex+arr[i];
    ex=c;
  }
  return max(in,ex);
 }

int main()
 {
	    int n;
	    cout<<"enter the length array\n";
	    cin>>n;
	    int arr[n];
	    cout<<"enter the no in array\n";
        for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	   cout<<auxsum3(arr,n);

	return 0;
}
