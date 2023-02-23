//Rock paper scissors:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissor(char you,char comp){ //creating a function that takes two inputs one from user and one from computer
    if(you==comp){                        //considering all the possible cases using if else statements
        return 0;
}
    if(you=='r' && comp=='p'){            //r=rock;  p=paper;  s=scissors;
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }
    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }
    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }

}
int main(){
char you,comp;                 //you=input by user;     comp=input by computer;
int number;
srand(time(0));                //these two lines convert time into digits inbetween 0 and 100
number=rand()%100+1;
if(number<33){                 //dividing 100 seconds into 3 groups of rock,paper and scissors each
    comp='r';
}
else if(number>33 && number<66){
    comp='p';
}
else{
    comp='s';
}
printf("Enter 'rock' for rock 'paper' for paper and 'scissor' for scissors :\n");
scanf("%c",&you);
 printf("you chose %c and computer chose %c\n",you,comp);
int result = RockPaperScissor(you,comp);
if(result==0){
    printf("And that's a draw");
}
else if(result==1){
    printf("Congratulations!!! you won the Game!");
}
else{
    printf("Better luck next time,you lost the game!");
}
return 0;
    
}

