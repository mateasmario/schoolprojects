#include <stdio.h>

int main()
{
    float observedValues[] = {1, 2, 5, 27};
    float predictedValues[] = {0.8, 2, 6.5, 27.3};

    int n = 4;

    // Calculate the MSE
    float MSE;
    float diff = 0;
    float sum = 0;

    for (int i = 0; i<n; i++)
    {
        // Calculate the square difference for each pair
        diff = predictedValues[i] - observedValues[i];
        diff *= diff;

        // add the square difference to the existing sum
        sum += diff;
    }

    float frac = (float)1/n;
    
    MSE = frac * sum;

    // print the output of the MSE
    printf("%f", MSE);

    return 0;
}
