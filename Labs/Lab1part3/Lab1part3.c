
#include <stdio.h>
int main(void) {
    const double PoundsPerKg = 2.20462;
    const double OuncesPerPound = 16.0;
    float weight;
    printf("Please enter a weight in kilograms: ");
    scanf("%f", &weight);
    double totalPounds = weight * PoundsPerKg;

    // Get whole pounds
    int pounds = (int)totalPounds;
    // Get fractional pounds
    double fractionalPounds = totalPounds - pounds;

    // Convert fractional pounds to ounces
    double totalOunces = fractionalPounds * OuncesPerPound;
    int ounces = (int)totalOunces;
    double ouncesRemainder = totalOunces - ounces;

    printf("%i pounds, %i ounces, %.2f ounces remainder\n", pounds, ounces, ouncesRemainder);

    return 0;
}


/*
Line 1: remove 3 spaces, remove ; 
Line 2: remove 2 spaces
Line 3: remove duplicate “=” sign
Line 4: add ; 
Line 5: changed 'int weight' to 'float weight' for correct type with %f
Line 6: replace %d with %f to see decimals
Line 8: changed 'int weightInPounds' to 'double weightInPounds' for precision
Line 11: made 'weightInPounds' into int for pounds
Line 20: remove 2 spaces, replaced  %.3f with %.2f  should be 2 decimal points not 3
Line 21: made 'totalOunces' into int for ounces
Line 22: Added return value 
Line 23: changed %d to %i for ounces to match int type
*/
