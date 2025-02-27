#include<stdio.h>
int main(){
    int n1, n2, n3, n4=0, n5=0, a, b, c, flag, r,i, sump1=0, sump2=0, sump3=0, sumnp1=0, sumnp2=0, sumnp3=0;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    a = n1;
    b = n2; 
    c = n3;

    while(a!=0){
        r = a%10;
        flag = 0;
        if(r!=0 && r!=1){
        for(i=2;i<r;i++){
            if(r%i==0){
                flag++;
            }
        }}
        else{
            flag++;
        }

        if(flag==0){
            sump1 = sump1 + r;            
        }
        else{
            sumnp1 = sumnp1 + r;
        }
        
        a = a/10;

    }
    while(b!=0){
        r = b%10;
        flag = 0;
        if(r!=0 && r!=1){
        for(i=2;i<r;i++){
            if(r%i==0){
                flag++;
            }
        }}
        else{
            flag++;
        }

        if(flag==0){
            sump2 = sump2 + r;            
        }
        else{
            sumnp2 = sumnp2 + r;
        }
        
        b = b/10;

    }
    while(c!=0){
        r = c%10;
        flag = 0;
        if(r!=0 && r!=1){
        for(i=2;i<r;i++){
            if(r%i==0){
                flag++;
            }
        }}
        else{
            flag++;
        }

        if(flag==0){
            sump3 = sump3 + r;            
        }
        else{
            sumnp3 = sumnp3 + r;
        }
        c = c/10;

    }


    if(sump1>9){
        sump1=sump1 % 9;
    }
    if(sump2>9){
        sump2 = sump2 % 9;
    }
    if(sump3){
        sump3 = sump3 % 9;
    }

    if(sumnp1>9){
        sumnp1=sumnp1 % 9;
    }
    if(sumnp2>9){
        sumnp2 = sumnp2 % 9;
    }
    if(sumnp3){
        sumnp3 = sumnp3 % 9;
    }

    n4 = sump3*100+sump2*10+sump1;
    n5 = sumnp3*100+sumnp2*10+sumnp1;

    printf("The new number n4 is %d\n", n4);
    printf("The new number n5 is %d", n5);


}