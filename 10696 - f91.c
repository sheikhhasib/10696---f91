#include<stdio.h>
int main(){
    long int n;
    while(scanf("%ld",&n)==1 && n!=0){
        if(n<=100){
            printf("f91(%ld) = 91\n",n);
        }
        else{
            printf("f91(%ld) = %ld\n",n,n-10);
        }
    }
    return  0;
}
