#include <stdio.h>

int main(){

    int number;
    printf("Enter number to sum upto N-->");
    scanf("%d",&number);
    printf("%d",sumNum(number));

return 0;
}
int sumNum(int n){

    if(n>=1){
        return n+sumNum(n-1);
    }
}
