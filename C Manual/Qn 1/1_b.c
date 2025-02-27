#include<stdio.h>
#include<conio.h>
int main(){
int N,r,pro=1,x, i, countp=0,countnp=0, a, l;
float sump=0, sumnp=0;
printf("eNTER A NUMBER ");
scanf("%d",&N);
x=N;
while(x!=0){
r=x%10;
pro=pro*r;
x=x/10;
}
printf("The product of digits is %d\n",pro);
a = N;
while(a!=0){
r=a%10;
int flag=0;
if(r!=1&&r!=0){
for(i=2;i<r;i++){
if(r%i==0){
flag++;

}}

}
else{
    flag++;
}
if(flag==0){
    sump = sump + r;
    countp++;
}
else{
    sumnp = sumnp + r;
    countnp++;
}
a=a/10;
}

printf("Prime digits=%d\n",countp);
printf("Not prime digit=%d\n",countnp);

printf("The average of prime digits : %f\n", sump/countp);
printf("The average of prime digits : %f\n", sumnp/countnp);

return 0;

}
