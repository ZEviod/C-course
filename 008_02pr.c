#include<stdio.h>

int main(){
    char st1[32];
    char st2[44];
    char c;
    int i=0;

    printf("Enter the value of first string:\n");
    scanf("%s", st1);

    printf("Enter the value of second string char by char:\n");
    while(c!='\n'){

    fflush(stdin);
    scanf("%c", &c);
    printf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';//i-1 for to remove the \n from the st2 word

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    return 0;
}