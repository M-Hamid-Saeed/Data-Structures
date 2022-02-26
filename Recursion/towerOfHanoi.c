#include <stdio.h>


//Tower of Hanoi with recursion
//The drawback of recursion is that its very slow.
int main() {
    int noMarbles;
    printf("Enter Number of Marbles");
    scanf("%d",&noMarbles);
  towerHanoi(noMarbles,'A','B','C');
  return 0;
}
void towerHanoi(int n,char start,char Mid,char End) //Lets say A is the first tower B is the helping and C is our destination
{
    if(n>=1){
        towerHanoi(n-1,start,End,Mid);  //n-1 will move from start to Mid cz' now Mid is our destination..Here Mid will go to char End as it will become our desstination
        printf("From %c to %c\n***********\n",start,End);//Next the start and End will print which holds the value
        towerHanoi(n-1,Mid,start,End);//At last again the n-1 will move from mid to end

    }
    /*
    In general what we want to do is we will move n-1th marble from A to B then nth marble from A to C and the same n-1th marble from B to C and that n-1th will
    divide into smaller chunks which will work same till 1.

      */
}
