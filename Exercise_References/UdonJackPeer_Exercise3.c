#include <stdio.h>

int main()
{
	int incorrect=0;
	int choice;
	
	printf("Welcome to our game for today! You will be given 8 question and if you have 4 incorrect answers you lose!\n\n");
	
	if(incorrect<4)
	{
		printf("Q1. What is the country that I want to go to: [1]Indonesia [2]Sweden [3]Sydney\n\n");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("Incorrect. Nice try onto the next question\n\n");
			incorrect++;
		}
		else if(choice==2)
			printf("Good Job! Lets see if you can get the next \n\n");
		else
		{
			printf("No! So close!\n\n");
			incorrect++;
		}
	
	}
	
		choice=0;
	
	if(incorrect<4)
	{
		printf("Q2. What is my favorite sport?: [1]Volleyball [2]Basketball [3]Soccer \n\n");
		scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Correct!. 6 more!\n\n");
		}
		else if(choice==2)
		{
			printf("Wrong. I don't play hoops \n\n");
			incorrect++;
		}
	else
		{
			printf("better luck next time!\n\n");
			incorrect++;
		}
	}
	
	choice=0;
	
	
	if(incorrect<4)
	{
	printf("Q3. What is my favorite Movie?: [1]Harry potter [2]Dune [3]In time \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Asciendo! (correct)\n\n");
		}
		else if(choice==2)
		{
			printf("Avada kadabra! (X) \n\n");
			incorrect++;
		}
		else
		{
			printf("Crucio! (X)\n\n");
			incorrect++;
		}	
	}
	
	choice=0;
	
	if(incorrect<4)
	{
	printf("Q4. What is my favorite cuisine?: [1]Italian [2]American [3]Japanese \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Boo!!\n\n");
			incorrect++;
		}
		else if(choice==2)
		{
			printf("Meh not close\n\n");
			incorrect++;
		}
		else
		{
			printf("I love sushi!\n\n");
		}	
	}
	
	choice=0;
	

	
	if(incorrect<4)
	{
	printf("Q5. What is my favorite hobby?: [1]Painting [2]Cooking [3]Dancing \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Not good at art.\n\n");
			incorrect++;
		}
		else if(choice==2)
		{
			printf("Not my favorite.\n\n");
			incorrect++;
		}
		else
		{
			printf("Step groove dance hataw!\n\n");
		}	
	}
	
	choice=0;
	
	if(incorrect<4)
	{
	printf("Q6. What is my favorite online game?: [1]LoL [2]DOTA [3]Counter strike GO \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Keep it up!\n\n");
		}
		else if(choice==2)
		{
			printf("Too complicated for me so no.\n\n");
			incorrect++;
		}
		else
		{
			printf("Get bored easily\n\n");
			incorrect++;
		}	
	}
	
	choice=0;
	
	if(incorrect<4)
	{
	printf("Q7. What is my favorite SitCom?: [1]Friends [2]How I Met Your Mother [3]Brooklyn99 \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("All time fave!!!\n\n");
		}
		else if(choice==2)
		{
			printf("Ehhh so so but no\n\n");
			incorrect++;
		}
		else
		{
			printf("uhhh sorry wrong\n\n");
			incorrect++;
		}	
	}
	
	choice=0;
	
	if(incorrect<4)
	{
	printf("Q8. What is my favorite app?: [1]Youtube [2]Tiktok [3]x(Twitter) \n\n");
	scanf("%d",&choice);
	
		if(choice==1)
		{
			printf("Well at least you tried \n\n");
			incorrect++;
			
		}
		else if(choice==2)
		{
			printf("Congrats you finished all the questions!\n\n");
			
		}
		else
		{
			printf("Sorry but i only use it for news so no\n\n");
			incorrect++;
		}	
	}
	
	
}