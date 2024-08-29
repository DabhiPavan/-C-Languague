#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;// pointer
    printf("%p\n",&x);// prints address of x
    printf("%p\n",x);// %p to print address of integer a
    printf("%d\n",*x);//prints value of a that is asigned to x
    return 0;
}