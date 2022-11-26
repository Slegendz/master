#include<stdio.h>

int sum(int n,int a, int b,int c);

int main(){
    int n;
    int a,b,c;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    
    printf("%d",sum(n,a,b,c));  
}

int sum(int n,int a,int b, int c){

    if(n==0){
        return 0;
    }
    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }
    if(n==3){
        return c;
    }
    
    int s1=sum(n-1,a,b,c)+sum(n-2,a,b,c)+sum(n-3,a,b,c);
    return s1;
}