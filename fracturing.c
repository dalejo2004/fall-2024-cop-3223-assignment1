/******************************************************************************

                            

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
int main(int argc, char **argv) 
{ 
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
double calculateDistance() 
{
double x1, y1;

    printf("Enter x and y Values for Point #1: \n");
    printf("x: ");
    scanf("%lf", &x1);
    printf("y: ");
    scanf("%lf", &y1);
    
double x2, y2;

    printf("Enter x and y Values for Point #2: \n");
    printf("x: ");
    scanf("%lf", &x2);
    printf("y: ");
    scanf("%lf", &y2);
    
double distance = sqrt(pow(x2-x1,1)+pow(y2-y1,1));

    printf("The total distance between the two points is: %.2lf\n", distance );
    
    return distance;
}
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
double calculatePerimeter() 
{
    
double distance = calculateDistance();
double perimeter = PI*distance;

    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);
    
    return 4.0;
}
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
double calculateArea() 
{
    
double distance = calculateDistance();
double area = PI*pow(distance,2);
    printf("The area of the city encompassed by your request is: %.2lf\n", area);
    
    return 2.0;
}
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
double calculateWidth()
{
    
double width = calculateDistance();

    printf("The width of the city encompassed by your request is: %.2lf\n", width);
    
    return 3.0;
}
//********************************************************
// 
//
// 
// 
// 
// 
//********************************************************
double calculateHeight()
{
double height = calculateDistance();

    printf("The heigh of the city encompassed by your request is: %.2lf\n", height);
    
    return 3.0;
}




