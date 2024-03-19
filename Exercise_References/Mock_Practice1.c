/*1. int demeritv1(int, int, int) -  will return the total demerits 
earned by the offenses in the parameters. 
The first parameter contains the number of offenses of the player. 
The second parameter contains the minimum demerit points for the offense. 
The third parameter contains the repeater's consequence. 10 points
*/

int demeritv1(int numOffenses, int minDemeritPoints, int repeatersConsequence){ 
	
	int totalDemeritPoints = 0;
	
	if (numOffenses >= 1){
		totalDemeritPoints = minDemeritPoints;
		
		for(int i = 2; i <= numOffenses; i++){
			totalDemeritPoints += minDemeritPoints + (i - 1) * repeatersConsequence;
		}
	}
			
	return totalDemeritPoints;	
}

/*2. int demeritv2(int, int) - will return the total demerits earned by 
the offenses in the parameters. 
The first parameter contains the number of offenses of the player. 
The second parameter contains the minimum demerit points for the offense. 20 points
*/

int demeritv2(int numOffenses, int minDemeritPoints){ //you can change parameter names

    int totalDemeritPoints = 0;

    if (numOffenses == 1){
        totalDemeritPoints = minDemeritPoints;
    } else if (numOffenses == 2){
        totalDemeritPoints = minDemeritPoints + 1;
    } else {
        totalDemeritPoints = minDemeritPoints + 1;
        int additionalDemerit = 1;
        
        for (int i = 3; i <= numOffenses; i++){
            if (i <= 4){
                additionalDemerit = 2;
            } else if (i <= 6){
                additionalDemerit = 3;
            } else if (i <= 9){
                additionalDemerit = 5;
            } else if (i <= 14){
                additionalDemerit = 8;
            } else {
                additionalDemerit *= 2;
            }

            totalDemeritPoints += additionalDemerit;
        }
    }
							// you cannot add more returns; you may edit the expression being returned
	return totalDemeritPoints;			// this must be the last statement in the function
}

/*3. int demeritv3(int, int, int, int, int) - will return the total merits 
left for the player after the demerits earned by the parameters are deducted. 
The first parameter contains the current merit points of the player. 
The second parameter contains the number of offenses of the player. 
The third parameter contains the minimum demerit points for the offense. 
The fourth parameter contains the repeater's consequence. 
The fifth parameter contains a representation of what kind of player the player is; 
it will contain the value 1 if the player is a normal player, 
and it will contain the value 2 if the player is a red-flagged player. 
(Assume that the fifth parameter can only have those two possible values.) 
On the very first time merit points become negative, 
the function must return that first negative value 
and must not continue deducting any more demerit points. 20 points
*/

int demeritv3(int currentPlayerMerit, int playerOffense, int minDemerit, int consequenceResult, int playerState){ //you can change parameter names
	
							// you cannot add more returns; you may edit the expression being returned
	return totalDemeritv3;			// this must be the last statement in the function
}