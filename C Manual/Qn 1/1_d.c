#include<stdio.h>
int main(){
    int n1=0, n2=0, n3=0, i, j, x, odd=1, l=0;
for(i=1;i<=10000;i++)
{
    
    if(i%2==1){
        n1 = n1+ i;
        if(n1>=100){
            break;
        }
    }
    
}
for(i=1;i<=10000;i++)
{
    
    if(i%2==0){
        n2 = n2+ i;
        if(n2>=100){
            break;
        }
    }
    
}
for(i=1;i<=10000;i++)
{
    x = i;
   for(j=2;j<i;j++){
    if(i%j!=0){
        if(x>=10){
            x = x % 9;
        }
        n3 = n3 + x;
    }
   }
   
   if(n3>=100){
    break;
}
    
}
    
    printf("The number is %d\n",n1);
    printf("The number is %d\n",n2);
    printf("The number is %d",n3);

    return 0;

}