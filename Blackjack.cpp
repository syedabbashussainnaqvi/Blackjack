#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n=0;
int main()
{
                                printf("\t\tWelcome to the Blackjack Program\n");


srand(time(NULL));  
int player1=rand()% 10+2;
int player2=rand()% 10+2;
int player3=rand()% 10+2;
int player_total=0;
int dealershow=rand()% 10+2;
int dealerhidden=rand()% 10+2;
int dealer3=rand()% 10+2;
int dealer_total=0;

int choice;
 player_total=player1+player2;
 printf("Hello test");
  printf("\nplayer has two cards %d and %d\n",player1,player2);
  printf("And player total is %d\n",player_total);
  
   dealer_total=dealershow+dealerhidden;
    printf("\n\ndealer has two cards %d and 2nd card is hidden\n",dealershow);
     printf("dealers total is also hidden\n");
      printf("\npress 1 for hit\npress 2 for stay\n");

while (player_total<22){
	printf("would player like to stay or hit\n");
   	 scanf("%d",&choice);
       if(choice==1 &&  player_total<=21){
         player_total+=player3;
           printf("player decided to hit and his card is %d and player total is %d\n",player3,player_total);
}

       if (choice==1 && player_total>21){
	       printf("player got busted and dealer ultimately wins");
	       goto c;
}
 else if (choice==2){
            printf("player decided to stay \n");
goto a;	
}
}
a:
	printf("now its dealer turn to play\n");
	printf("dealers hidden card was %d\n",dealerhidden);
	dealer_total=dealershow+dealerhidden;
	printf("delears total is %d\n",dealer_total);
while (dealer_total<22){
   	printf("would dealer like to stay or hit\n");
   	 scanf("%d",&choice);
   	 if (choice==1 && dealer_total<=21){
	 dealer_total+=dealer3;
   	   printf("\ndealer decided to hit and his new card is %d\n",dealer3);
		  printf("dealer total is %d\n",dealer_total);	}
   	  
   	   if(choice==1 && dealer_total>21){
   	   	printf("dealer got busted and player wins\n");goto c;
		  }
		  else if (choice==2){
		  	printf("dealer decided to stay\n");
 goto b;				
}
}
b:
	if (player_total>dealer_total){
	printf("player wins");
	}
	else if ("dealer_total>player_total"){
		printf("dealer wins");
	}
	else {
		printf("tie");
	}
c:
  return 0;
  }
 




