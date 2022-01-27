#include <stdio.h>

int main(){

    int number;
    printf("Enter number to print upto N-->");
    scanf("%d",&number);
    printNum(number);

return 0;
}
int printNum(int n){

    if(n>=1){
        //Recursively calling function by reducing n-1 and then printing n..By this n-1 will be printed and then n will be printed
        printNum(n-1);
        printf("%d \n",n);
    }
}
