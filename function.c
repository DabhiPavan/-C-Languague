#include<stdio.h>
void greet(){
    printf("good morning\n");
    printf("how are you?");
    return;
}
int main(){
    int i;
    for(i=1;i<=10;i++){
        greet();
    }
    
    return 0;
}