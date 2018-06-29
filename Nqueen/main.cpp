#include<bits/stdc++.h>
using namespace std;

//using the complete search =========================
int isvalid1(int s[],int n){
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if( (s[i]==s[j]) ||  abs(i-j)==abs(s[i]-s[j]))
           return 0;
    }
 }return 1;
}

void auxqueen1(int d,int n,int s[]){
    if(d==n){
         if(isvalid1(s,n)){//cout<< "ku";

                for(int i=0;i<n;i++){
                    cout<<s[i]<<" ";
                }cout<<endl;


      } return ;

    }
    for(int i=0;i<n;i++){
        s[d]=i;
        auxqueen1(d+1,n,s);
    }
 }
void nqueen1(int n){
   int s[n];
    auxqueen1(0,n,s);
}
//using the backtracking ********************
int isvalid2(int s[],int d,int c){
  for(int i=0;i<d;i++){
       if(s[i]==c || abs(s[i]-c)==abs(i-d) )
        return 0;
  }
  return 1;
}

void auxqueen2(int d,int n,int s[]){
   if(d==n){
         for(int i=0;i<n;i++)
         { cout<<s[i]<<" ";
          }cout<<endl;
       return ;
    }
 for(int i=0;i<n;i++){
     if(isvalid2(s,d,i)){
       s[d]=i;

     auxqueen2(d+1,n,s);
     }
 }
}

void nqueen2(int n){
   int s[n];
    auxqueen2(0,n,s);
}
int main()
{   int n;
    cout<<"enter the no of the chess bord\n";
    cin>>n;
    nqueen2(n);//as you require
    return 0;
}
