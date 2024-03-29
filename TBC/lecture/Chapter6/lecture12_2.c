#include <stdio.h>

int main()
{
    const double speed = 1.0;
    const unsigned repeat_max = 50;

    double time = 0.0;          // Elapsed time
    double dist_arch = 0.0;     // Achilleus distance from start point
    double dist_turtle = 1.0;   // turtle distance from start point
    double spped_arch = 10.0;
    double speed_turtle = 0.001;
    double dt = 0.01;
    unsigned i;

    printf("time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);

    for (i = 0; i < repeat_max ; ++i)
    {
        dist_arch += spped_arch * dt;
        dist_turtle += speed_turtle * dt;
        time += dt;

        printf("time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);

        dt *= 0.5;
    }

    return 0;
}