/*
       Author :  Vatsal Mangukiya
       Purpose : Rock Paper sessior
       Date : 26/05/2023
                     =====================What i learn??============================
       rock paper sessior 
       // Player 1:
       // Player 2:
       //rock vs scissors -rock wins
       //paper vs scissorts - scissors wins
       //paper vs rock - paper wins

      
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genrateRandomNumber(int n)
{
       srand(time(NULL)); //input time(NULL) time in second return 
       return rand()%n;
}
int main()
{
       // printf("The time is %d",time(NULL));
       static int player1Score=0, player2Score=0;
       int number=3;
       int userinput;
       int computerinput;
       char player1[10],player2[10] ="Computer's";
       printf("Enter Your Name");
       scanf("%s",&player1);
       printf("\n Let's play rock paper sessior \n");

       while(number--)
       {
             
              printf("Press 0. for rock\n");
              printf("Press 1 for sessior\n");
              printf("Press 2. for paper\n");
              printf("Player1's Choice :");
              scanf("%d",&userinput);
              printf("Computer chose ");
              computerinput=genrateRandomNumber(3);
              printf("%d\n");
              if(userinput == computerinput)
                     printf("Its Tie");
              if(userinput == 0 && computerinput ==1)
                     player2Score++;
              if(userinput == 1 && computerinput== 2)
                     player1Score++;
              if(userinput ==2 && computerinput ==0)
                     player1Score++;
              if(userinput ==1 && computerinput ==0)
                     player2Score++;
      

       }
       printf("Player1's Score : %d\n",player1Score);
       printf("Player2's Score : %d\n",player2Score);

       if(player1Score>player2Score)
              printf("%s is won by %d points",player1,player1Score);
       else
              printf("%s is won by %d points",player2,player2Score);


       return 0;
}