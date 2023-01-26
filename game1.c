#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandom(int n)
{
	srand(time(NULL));
	return rand()%n;
}
int greater(int c1,int c2)
{
	if((c1=='r')&& (c2=='s'))
	return 1;
	if (c1==c2)	
	return -1;
	else
	return 0;
	if((c1=='p')&&(c2=='r'))
	return 1;
	else
	return 0;
	if((c1=='s')&&(c2=='p'))
	return 1;
	else 
	return 0;
}
int main()
{
	int n,i,ch1,ch2,c=0,y=0;
	char dict[]={'r','p','s'};
	char user,comp;
	printf("\n\tWELCOME\nROCK-PAPER-SCISSOR\n");
	printf("player 1: YOU\nplayer 2 : CPU\n");
	for( i=0;i<3;i++)
	{
		//user's input
	printf("1.ROCK\n2.PAPER\n3.SCISSOR\n");
	printf("PLAYER 1(YOU) TURN\nenter your choice:");
	scanf("%d",&ch1);
	user=dict[ch1-1];
	printf("\n you chose %c\n\n",user);
	//cpu input
	printf("PLAYER 2(CPU) TURN:");
	n=generaterandom(3)+1;
	comp=dict[n+1];
	printf("\n CPU chose %c\n",comp);
	//compare the scores
	if(greater(user,comp)==1)
	{
		c+=1;
	}
	else if (greater(user,comp)== -1)
	{
		c+=1;
		y+=1;	
	}
	else
	{
		y+=1;
	}
	if (c>y)
	
		printf("\nCPU is WINNER");
	else if (c<y)
	printf("\n YOU are WINNER");
	else
	printf("MATCH DRAW!!");
	
}
	
	
}
