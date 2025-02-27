#include<stdio.h>
int fibo1(int, int, int, int,int, int);
// void fibo2();
// void fibo3();
int main(){
    int N,i=1, a=0,b=0,c=0,N1=0,x;
    
    
    x = fibo1(4,6, 1, 10,0,N1);
    printf("The N1 is %d", x);

    // printf("\n");
    // fibo2(5, 7, 1, 10, 0);
    // printf("\n");
    // fibo3(0, 3, 1, 10, 0);
    return 0;

}
int fibo1(int a, int b, int i, int N, int c, int N1){
    if(i<=N){
        printf("%d\t", a);
        
       
        c = a+b;
        a = b;
        b = c;

        i++;
        if(a%9==0){
            a = 9;
        }
        if(a>=10){
            a = a%9;
        }
        N1=N1+a;
        printf("%d\n", N1);

        fibo1(a,b,i,N,c,N1);
        
        
    }
    return N1;
    
}
// void fibo2(int a, int b, int i, int N, int c){
//     if(i<=N){
//         printf("%d\t", a);
        
       
//         c = a+b;
//         a = b;
//         b = c;

//         i++;
//         fibo2(a,b,i,N,c);
        
//     }
    
// }
// void fibo3(int a, int b, int i, int N, int c){
//     if(i<=N){
//         printf("%d\t", a);
        
       
//         c = a+b;
//         a = b;
//         b = c;

//         i++;
//         fibo3(a,b,i,N,c);
        
//     }
// }