#include<stdio.h>

void printarray(int *pt,int n){//can use pt[] instead of *pt here
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(pt+i));//here also can pt[i] replacable
    }
    pt[2]=5555;//here it change value in arr array of main as well
}
int main(){
    int arr[]={23,54,24,53,665,532};
    printarray(arr,6);
    printf("%d", arr[2]);
    return 0;
}