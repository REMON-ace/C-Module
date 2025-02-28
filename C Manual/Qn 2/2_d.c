#include<stdio.h>
int main()
{
int N1=1,N2=1, N3=1, a=1,b=1,c=0,i;

for(i=0;i<10;i++){
    printf("%d\t",a);
    if(N1<=100){
        N1 = N1*a;
    }
    else{
        break;
    }
    c=a+b;
    a=b;
    b=c;
    
}
printf("\n");

a=1;
b=2;
c=0;
for(i=0;i<10;i++){
    printf("%d\t",a);
    if(N2<=100){
        N2 = N2*a;
    }
    else{
        break;
    }
    c=a+b;
    a=b;
    b=c;
    
}
printf("\n");

a=2;
b=4;
c=0;
for(i=0;i<10;i++){
    printf("%d\t",a);
    if(N3<=100){
        N3 = N3*a;
    }
    else{
        break;
    }
    c=a+b;
    a=b;
    b=c;
    
}
printf("\n");

printf("The N1 is %d\n", N1);
printf("The N2 is %d\n", N2);
printf("The N3 is %d", N3);

return 0;

}
