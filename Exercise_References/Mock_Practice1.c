int calculateDemeritPointsV1(int numOffenses, int minDemeritPoints, int repeatersConsequence){ 
	
	int totalDemeritPoints = 0;
	
	if (numOffenses >= 1){
		totalDemeritPoints = minDemeritPoints;
		
		for(int i = 2; i <= numOffenses; i++){
			totalDemeritPoints += minDemeritPoints + (i - 1) * repeatersConsequence;
		}
	}
			
	return totalDemeritPoints;	
}

int calculateDemeritPointsV2(int numOffenses, int minDemeritPoints){

    int totalDemeritPoints = 0;
    int prevPoints = minDemeritPoints;

    for (int i = 1; i <= numOffenses; i++){
        if (i == 1){
            totalDemeritPoints += minDemeritPoints;
        } else if (i == 2){
            totalDemeritPoints += prevPoints + 1;
            prevPoints = prevPoints + 1;
        } else if (i >= 3 && i <= 4){
            totalDemeritPoints += prevPoints + 2;
            prevPoints += 2;
        } else if (i >= 5 && i <= 6){
            totalDemeritPoints += prevPoints + 3;
            prevPoints += 3;
        } else if (i >= 7 && i <= 9){
            totalDemeritPoints += prevPoints + 5;
            prevPoints += 5;
        } else if (i >= 10 && i <= 14){
            totalDemeritPoints += prevPoints + 8;
            prevPoints += 8;
        } else {
            totalDemeritPoints += prevPoints * 2;
            prevPoints *= 2;
        }
    }

    return totalDemeritPoints;
}

int demeritv3(int currentPlayerMerit, int playerOffense, int minDemeritPoints, int repeatConsequence, int playerType){
    int totalDemeritPoints = 0;
    int prevPoints = minDemeritPoints;

    for (int i = 1; i <= playerOffense; i++) {
        if (i == 1) {
            totalDemeritPoints += minDemeritPoints;
        } else {
            int repeaterPoints;
            if (playerType == 1) {
                repeaterPoints = repeatConsequence;
            } else {
                repeaterPoints = repeatConsequence * (i - 1);
            }
            totalDemeritPoints = prevPoints + repeaterPoints;
            prevPoints = totalDemeritPoints;
        }

        currentPlayerMerit -= totalDemeritPoints;

        if (currentPlayerMerit < 0) {
            return currentPlayerMerit;
        }
    }

    return currentPlayerMerit;
}