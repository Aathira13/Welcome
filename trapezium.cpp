#include<stdio.h>                                                                

void main()
{
    int side, parallel_side, distance_of_sides, sum=0,area=0;
    printf("\nFinds area of trapezium\n-------------------");
    printf("\nEnter side: ");
    scanf("%d", &side);
    printf("Enter parallel side: ");
    scanf("%d", ¶llel_side);

    printf("Enter distance between sides: ");
    scanf("%d", &distance_of_sides);

    sum = side + parallel_side;
    area = (sum * distance_of_sides)/2;

    printf("Rhombus Area: %d", area);
}
