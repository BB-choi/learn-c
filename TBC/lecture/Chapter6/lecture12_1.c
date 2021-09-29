#include <stdio.h>

int main()
{
    /* 
        Simulation of a moving Object

        - Speed = 1.0 m/s
        - dt = 1.0s 시간간격
        - Distance traveled during dt = Speed * dt

        - Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
        - Step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1. 0 m = 2.0 m
        - Step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0 m + 1. 0 m = 3.0 m
        - ... ...
        
     */

    /*
		Zeno's Paradox
		- Step 1 : 1.0 * 1.0 = 1.0, 1.0
		- Step 2 : 1.0 * 0.5 = 0.5, 1.0 + 0.5 = 1.5
		- Step 3 : 1.0 * 0.25 = 0.25, 1.5 + 0.25 = 1.75	
		... ... 
	*/


    const double speed = 1.0;
    const unsigned repeat_max = 10;

    double dt = 1.0;
    double time = 0.0;      // Elapsed time
    double dist = 0.0;      // Distance

    for (unsigned i = 0; i < repeat_max; ++i) {

        dist += speed * dt; // dist = dist + speed * dt;
        time += dt;

        printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);

        // TODO: half time step

        // dt = dt / 2; // dt가 double이므로 /2하면 2가 double로 형변환이 되어 계산됨
        // dt = dt / 2.0; // 곱하기가 나누기보다 빠르므로 / 2.0보다 * 0.5를 사용하는 것이 일반적이다.

        // dt = dt * 0.5;
        dt *= 0.5;

    }

    // Note: Infinite geometric series

    return 0;
}