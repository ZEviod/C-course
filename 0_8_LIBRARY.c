#include<stdio.h>
#include<string.h>

int main(){

//STRLN
    char *st = "HOLLAA";
    int a = strlen(st);
    printf("The length of string is %d\n",a);

    //*******************************************************

//STRCPY
    char *str = "ROYALISED";
    char str2[45];
    strcpy(str2,str);
    printf("Now the str2 is %s\n",str2);

    //*******************************************************

//STRCAT
    char strr1[45] = "ROYALISED";
    char *strr2 = "weapon";
    strcat(strr1,strr2);
    printf("Now the str1 is:%s\n", strr1);//no space will comee between

    //*******************************************************
    
//STRCMP
    char strrr1[45] = "joke";
    char *strrr2 = "jor";
    int val = strcmp(strrr1,strrr2);
    printf("Now the val is %d\n", val);
    
    return 0;
}