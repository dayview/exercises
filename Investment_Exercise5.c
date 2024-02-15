#include <stdio.h>
#include "practice.h"

main()
{
	float investment, interestRate;
	
	getInvestment(&investment);

	interestRate = getInterestRate(1);
	investment = computeAndShowNewInvestmentTotal(interestRate,investment);
	
	interestRate = getInterestRate(2);
	investment = computeAndShowNewInvestmentTotal(interestRate,investment);
	
	interestRate = getInterestRate(3);
	investment = computeAndShowNewInvestmentTotal(interestRate,investment);
}
