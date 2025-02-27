#include<stdio.h>
void fibo1(int, int, int, int,int);
void fibo2();
void fibo3();
int main(){
    int N,i=1, a=0,b=1,c=0;
    printf("Enter N");
    scanf("%d",&N);
    fibo1(a,b, i, N,c);
    printf("\n");
    fibo2(3, 5, 1, N, 0);
    printf("\n");
    fibo3(1, 1, 1, N, 0);
    return 0;

}
void fibo1(int a, int b, int i, int N, int c){
    if(i<=N){
        printf("%d\t", a);
        
       
        c = a+b;
        a = b;
        b = c;

        i++;
        
        fibo1(a,b,i,N,c);
        
    }
}
void fibo2(int a, int b, int i, int N, int c){
    if(i<=N){
        printf("%d\t", a);
        
       
        c = a+b;
        a = b;
        b = c;

        i++;
        fibo2(a,b,i,N,c);
        
    }
    
}
void fibo3(int a, int b, int i, int N, int c){
    if(i<=N){
        printf("%d\t", a);
        
       
        c = a+b;
        a = b;
        b = c;

        i++;
        fibo3(a,b,i,N,c);
        
    }
}