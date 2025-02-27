#include<stdio.h>
void display(){
    printf("HEllo World\t");
    display();
}
int main(){
    display();
    return 0;
}