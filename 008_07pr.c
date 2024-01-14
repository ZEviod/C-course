#include<stdio.h>
void decpt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}

int main(){
    char c[] = "ifnmp";//cannot use char *c here as it wont change 
    decpt(c);
    printf("Decrypted string is %s",c);
    return 0;
}