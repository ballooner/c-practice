#include <stdio.h>

/**
 * Modify the broker.c program of Section 5.2 by making both of the following changes:
 * (a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
 * (b) Add statements that compute the commission charged by a rival broker 
 * ($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Display the rival's commission as well as the original broker's
 */

int main(void)
{
    float commission, numShares, priceOfShares;

    printf("Enter the number of shares and price per share: ");
    scanf("%f %f", &numShares, &priceOfShares);

    float value = numShares * priceOfShares;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f) 
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else
        commission = 255.00f + .009f * value;

    float rivalCommission;

    if (numShares < 2000.00f)
        rivalCommission = 33.00f + .03f * value;
    else
        rivalCommission = 33.00f + .02f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rivalCommission);
    
    return 0;
}