#include<stdio.h>
void printtable(int *mulTABLE,int num,int n){
    printf("The multiplication table of %d is:\n", num);
    for(int i=0;i<n;i++){
        mulTABLE[i] = num*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",num, i+1,mulTABLE[i]);
    }
    printf("***************************************\n\n");
}

int main(){
    int mulTABLE[3][10];

    printtable(mulTABLE[0],2,10);
    printtable(mulTABLE[1],7,10);
    printtable(mulTABLE[2],9,10);

  /*  for(int i=0;i<10;i++){
            mulTABLE[0][i] = 2*(i+1);
        }

        for(int i=0;i<10;i++){
            printf("2 x %d = %d\n", i+1,mulTABLE[i]);
        } 
*/
    return 0;
}