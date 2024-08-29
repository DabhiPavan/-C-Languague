//declare functions with void
//main() can only be used once
#include<stdio.h>
void Australia(){
    printf("You are in australia\n");
    return; // declared australia as a function
}
void England(){
    printf("you are in England\n");
    Australia(); // calling australia
    // declared england as a function
}
void India(){
    printf("you are in india\n");
    England(); // calling england
    // declared india as a function
}
int main(){
    India();  // callin india
    //England();
    
    return 0;
}