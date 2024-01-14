#include<stdio.h>
void encpt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}

int main(){
    char c[] = "hemlo";//cannot use char *c here as it wont change 
    encpt(c);
    printf("Encrypted string is %s",c);
    return 0;
}