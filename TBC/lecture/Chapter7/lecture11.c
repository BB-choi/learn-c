#include <stdio.h>
#include <float.h>

int main()
{
    float max = -FLT_MAX;
    float min = FLT_MAX;
    // 일부러 매우매우 작은값, 매우매우 큰값으로 설정함
    float sum = 0.0f;
    float input;
    int n = 0;

    while(scanf("%f", &input) == 1)
    {
        // TODO: ignore negative values
        // if (input < 0.0f) continue;
        // if( input > 100.0f) continue;
        if (input < 0.0f || input > 100.0f) continue;

        max = (input > max) ? input : max;
        // min = (input < min) ? input : min;

        if(input < min)
            min = input;
        // else min = min;

        sum+= input;


        n++; // Count number of inputs
    }

    if (n > 0)
        printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
    else
        printf("No input\n");

    return 0;

}