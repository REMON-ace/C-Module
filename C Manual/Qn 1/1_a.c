#include<stdio.h>
#include<conio.h>
int main()
{
int a,count=0,i=2;

printf("Hello World!");
printf("Enter a number: ");
scanf("%d",&a);

while(i<a){
    if(a%i==0){
        count = count + 1;
    }
    i++;
}

if(count==0){
    printf("Prime");
}
else{
    printf("Not prime");
}
getch();
return 0;

}