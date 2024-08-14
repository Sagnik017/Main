#include<stdio.h>

int main(){
   
   int A[50],i=2;
   A[0]=0,A[1]=1;
   while(i<20){
    A[i]=A[i-1]+A[i-2];
    printf(" %d",A[i]);
    i++;
   }

return 0;
}
