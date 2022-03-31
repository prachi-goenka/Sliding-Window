#include<iostream>
using namespace std;
int main(){
    int n=8;
    int ar[n]={0,1,2,2,3,1,5,4};
    int k;cin>>k;
   int i=0, j=0;int sum=0;
    while(j<n){
         sum=sum+ar[j];
         j++;
      
      while(sum>k&&i<j){
           sum=sum-ar[i];
           i++; 

      }
       if(sum==k){
           for(int p=i;p<j;p++)
           {
               cout<<ar[p]<<" ";
           }
           cout<<endl;
       }
    }
}
