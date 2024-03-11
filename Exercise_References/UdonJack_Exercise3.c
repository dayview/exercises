#include <stdio.h>

void gameStart(){
	printf("Welcome to the game! You will be asked eight questions about me. Good luck!\n");
}

void gameEnd(int score){
	
	if(score == 8){
		printf("\nCongratulations! You know me so well!");
	} else if(score >= 4 || score <= 7){
		printf("\nYou're a good friend. Not bad!");
	} else {
		printf("\nBetter luck next time! I still consider you as a friend.");
	}
	
}

int main(){
	
	int firstChoice, secondChoice, thirdChoice, fourthChoice, fifthChoice, sixthChoice, seventhChoice, eighthChoice;
	int score = 0;
	int mistakes = 0;
	int continueGame = 1;
	
	gameStart();
	
	while(mistakes < 4 && continueGame == 1){
		printf("\nQuestion 1: What is my favorite MOBILE gacha game?\n");
		printf("1. FE Heroes\n2. Project Sekai\n3. FGO");
		printf("\nAnswer: ");
		scanf("%d", &firstChoice);
		
		int answer1 = 1;
		if (firstChoice == answer1){
			printf("\nCorrect! It has been my favorite game since 2017.\n");
			score++;
		} else if (firstChoice == 2){
			printf("\nIncorrect. I only started since 2022. The correct answer is 1.");
			mistakes++;
		} else {
			printf("Incorrect. I only played it once in 2019, and stopped. The correct answer is 1.");
			mistakes++;
		}

		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 2: What's my usual routine when I wake up?\n");
		printf("1. Facebook\n2. Messenger\n3. TikTok");
		printf("\nAnswer: ");
		scanf("%d", &secondChoice);
		
		int answer2 = 2;
		if (secondChoice == answer2){
			printf("\nCorrect!\n");
			score++;
		} else if (firstChoice == 1){
			printf("\nIncorrect. I only do it once I get up. The correct answer is 2.");
			mistakes++;
		} else {
			printf("Incorrect. I only do it if I'm bored. The correct answer is 2.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 3: What's my favorite ice cream flavor?\n");
		printf("1. Chocolate\n2. Mint Chip\n3. Pistachio");
		printf("\nAnswer: ");
		scanf("%d", &thirdChoice);
		
		int answer3 = 2;
		if (thirdChoice == answer3){
			printf("\nCorrect!\n");
			score++;
		} else if (thirdChoice == 1){
			printf("\nIncorrect. That's my second favorite. The correct answer is 2.");
			mistakes++;
		} else {
			printf("Incorrect. That's my honorable favorite. The correct answer is 2.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 4: What's my favorite card game?'\n");
		printf("1. Magic: The Gathering\n2. Hearthstone\n3. LoR");
		printf("\nAnswer: ");
		scanf("%d", &fourthChoice);
		
		int answer4 = 1;
		if (fourthChoice == answer4){
			printf("\nCorrect!\n");
			score++;
		} else if (fourthChoice == 2){
			printf("\nIncorrect. I got tired of it because of the pay-to-win META. The correct answer is 1.");
			mistakes++;
		} else {
			printf("\nIncorrect. I wasn't interested in playing it. The correct answer is 1.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 5: Who's my favorite character in Honkai: Star Rail?\n");
		printf("1. Luocha\n2. Yanfei\n3. Imaginary Dan Heng");
		printf("\nAnswer: ");
		scanf("%d", &fifthChoice);
		
		int answer5 = 2;
		if (fifthChoice == answer5){
			printf("\nCorrect!\n");
			score++;
		} else if (fifthChoice == 1){
			printf("\nIncorrect. He's my third favorite. The correct answer is 2.");
			mistakes++;
		} else {
			printf("Incorrect. He's my second favorite. The correct answer is 2.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 6: What's the name of my current phone?\n");
		printf("1. Redmi Note 10\n2. Nothing Phone 2\n3. iPhone 13");
		printf("\nAnswer: ");
		scanf("%d", &sixthChoice);
		
		int answer6 = 1;
		if (sixthChoice == answer6){
			printf("\nCorrect!\n");
			score++;
		} else if (sixthChoice == 2){
			printf("\nIncorrect. That's my dream phone. The correct answer is 1.");
			mistakes++;
		} else {
			printf("Incorrect. That's my OTHER dream phone. The correct answer is 1.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 7: Who do I mainly play in League of Legends?\n");
		printf("1. Lee Sin\n2. Janna\n3. Jhin");
		printf("\nAnswer: ");
		scanf("%d", &seventhChoice);
		
		int answer7 = 3;
		if (seventhChoice == answer7){
			printf("\nCorrect!\n");
			score++;
		} else if (seventhChoice == 1){
			printf("\nIncorrect. He's my favorite JUNGLER. The correct answer is 3.");
			mistakes++;
		} else {
			printf("Incorrect. She's my favorite SUPPORT. The correct answer is 3.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
		
		printf("\nQuestion 8: What's my favorite subject?\n");
		printf("1. Programming\n2. Metaphysics\n3. Philosophy");
		printf("\nAnswer: ");
		scanf("%d", &eighthChoice);
		
		int answer8 = 3;
		if (eighthChoice == answer8){
			printf("\nCorrect!\n");
			score++;
		} else if (eighthChoice == 1){
			printf("\nIncorrect. That's my normal interest. The correct answer is 3.");
			mistakes++;
		} else {
			printf("Incorrect. That's my favorite SUB-TOPIC in Philosophy. The correct answer is 3.");
			mistakes++;
		}
		
		if (mistakes >= 4){
			continueGame = 0;
		}

		if (continueGame == 0){
			printf("\n\nYour current score: %d", score);
			printf("\nYour current mistakes: %d", mistakes);
			printf("\nChances left: %d\n", 4 - mistakes);
		}
	}

	gameEnd(score);
	
	return 0;
}