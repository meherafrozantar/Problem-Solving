#include<stdio.h>
#include<math.h>

    double distance (double x1, double x2, double y1, double y2)
    {
        double dist;
        dist = sqrt ((x1-x2)* (x1-x2) + (y1-y2)*(y1-y2));
        return dist;
    }

    int main()
    {
        double milage = distance(0, 0, 3, 4);
        printf("Milage: %lf\n", milage);
        return 0;
    }


