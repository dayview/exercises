#include <stdio.h>
#define MAX_DAYS 5

void printDayEnergy(int nCharge, int nDay){
    printf("The energy at the end of day %d is %d\n", nDay, nCharge);
}

void printFinalEnergy(int nCharge){
    printf("Final Battery charge: %d\n", nCharge);
}

// 2) Consume Energy (6 pts)
/* 
  This function should implement the power consumption of the deliveries as
  indicated in the section Power Consumption. 
  
  \param *nCharge is the initial charge of the car
*/
void consumeEnergy(int *nCharge){
    // TODO: Write your code here
    int energyConsumption, distance;

    *nCharge -= distance * energyConsumption;
    if (*nCharge < 0){
        *nCharge = 0;
    }
}

// 3) Charge Energy (10 pts)
/* 
  This function should implement the charging process based on the weather
  as indicated in the section Power Charging. 
  
  @param *nCharge is the initial charge of the car
  @param nDayWeather is a single digit number indicating the weather
*/
void chargeEnergy(int *nCharge, int nDayWeather){
    // TODO: Write your code here
    int WeatherCharge;

    *nCharge += nDayWeather * WeatherCharge;
}

// 4) Weekly Usage (16 pts)
/* 
  This function should implement the weekly operations of the car as
  indicated in the section Weekly Operations. This function should call
  the functions consumeEnergy and chargeEnergy to calculate the energy of
  the car. The function printDayEnergy should be called at the end of each 
  day.
  
  @param *nCharge is the initial charge of the car
  @param nWeather is a 5 digit number to indicate the weather
*/

void weekOperations(int *nCharge, int nWeather){
    // TODO: Write your code here
    int i;
    for(i = 0; i < 5; i++){
        int dayWeather = nWeather % 10;
        nWeather /= 10;

        consumeEnergy(nCharge, dayWeather);
        chargeEnergy(*nCharge, i+1);

        printDayEnergy(*nCharge);
    }
    
    // Do not modify the final print statement
    printFinalEnergy(*nCharge);
}

/*
  Modify main so that it works as expected. The sample runs in the
  instructions will serve as a guide.
*/
int main(){
    int nWeeks, nCharge, nWeather;
    // Write your variable declarations here
    int i = 0;
    // Upto here
    
    printf("Input number of weeks: ");
    scanf("%d", &nWeeks);
    
    printf("Input initial charge: ");
    scanf("%d", &nCharge);
    
    printf("\n");
 
    // 1.1) Loop completion (2 pts)
    // Complete the loop so that the loop iterates the number of times
    // indicated by nWeeks.
    // 1.1 TODO: Write your code here
    for(i = 0; i < nWeeks; i++){ 
    // 1.1 Upto here
        printf("Input weather: ");
        scanf("%d", &nWeather);
        
        // 1.2) Invert Weather (10 pts)
        // Write a loop that reverses the value of nWeather. Any kind of
        // loop can be used. The variable nWeather should have its value
        // reversed by the end of the segment.
        // Example: 21121 -> 12112       11221 -> 12211
        // 1.2 TODO: Write your code here
        int reversedWeather = 0;
        while(nWeather != 0){
            int remainder = nWeather % 10;
            reversedWeather = reversedWeather * 10 + remainder;
            nWeather /= 10;
        }
        nWeather = reversedWeather;
        // 1.2 Upto here
        
        printf("Inverted weather %d\n\n", nWeather);
        
        // 1.3) Apply Charges (4 pts)
        // Write the statements that utilizes the charge function.
        // 1.3 TODO: Write your code here
        
        chargeEnergy(&nCharge, nWeather % 10);
        // 1.3 Upto here
        
        printf("\n");
        
    }
    printf("End of Deliveries\n");
    return 0;
}
