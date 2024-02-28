#include <stdio.h>

void displayPyramid(int nNum);
int checkDigit(int nID);

int main()
{
	char cChoice;
	int nPyramid;
	int nIDNumber;
	do
	{
		printf("-------------------------\n");
		printf("[a] Modified Pyramid\n");
		printf("[b] Mod-11 DLSU ID Check\n");
		printf("[x] Exit\n\n");
		printf("-------------------------\n\n");

		printf("Your choice : ");
		scanf(" %c", &cChoice);

		switch(cChoice)
		{
			case 'a': case 'A':
				printf("** You selected A **\n\n");
				printf("Enter an integer : ");
				int result = scanf(" %d", &nPyramid);
				
				//TODO: Add validation for the valid range for the input
                if(result != 1){

                    return 1;
                }
                else{
                    displayPyramid(nPyramid);
                }
				
				//end of validation code
				
				break;

			case 'b': case 'B':
				printf("** You selected B **\n\n");
				printf("Enter an ID Number : ");
				scanf(" %d", &nIDNumber);
				if (checkDigit(nIDNumber) == 1)
					printf("%d is a VALID ID Number", nIDNumber);
				else
					printf("%d is an INVALID ID Number", nIDNumber);
				break;
		
			case 'x': case 'X':
				break;
								
			default:
				printf("Your input is out of range");
		}
	// TODO: add validation
	}while(cChoice != 'x' && cChoice != 'X'); 							
	// End of Validation
	
	return 0;
}

void displayPyramid(int nNum)			
{
	int i, j, k;						//NOTE: You can change the variable names as needed.
										//  	Moreover, you can also introduce additional variables.
										
	// TODO: Loop construct to display the pyramid.
	
	for(i = 1; i <= nNum; i++){
        for(j = 1; j <= nNum - i; j++){
            printf(" ");
        }
        for(k = 1; k <= 2*i - 1; k++){
            printf("*");
        }
        printf("\n");
    }
	
	// End of Loop Construct
	
}

int checkDigit(int nID)	
{
	int remainder;
	
	// Check digit definition/validation

    remainder = nID % 11;

	// End of Check Digit Validation

	if (remainder == 0)					//HINT: If the checkDigit returns a remainder of 0, return 1
		return 1;						
	else
		return 0;
}