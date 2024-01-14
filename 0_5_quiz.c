#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning biroo\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon biroo\n");
    goodNight();
   
}

void goodNight(){
    printf("Good Night biroo\n");
    
}