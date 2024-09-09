//********************************************************
// fracturing.c
// Author: Daniel Primiciero
// Date: 9/3/2024
// Class: COP 3223, Professor Parra
// Purpose: This program helps calculates the different measurements that ask a user to help get detailed description of a circle.
// //********************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistancehelper();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
//********************************************************
// int main (int argc, char **argv)
//
// Purpose:         Joining all the functions together
// Input:           All the functions that are being used throughout the code
// Output:          Calls back all the functions to make the whole program work 
//********************************************************
int main(int argc, char **argv) 
{ 
//Recall all the functions in the order you set up the functions in
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
//********************************************************
// double calculateDistancehelper ()
//
// Purpose: Helps become the starter function and stores the values for the rest of the functions to be able to calculate     
// Input: X and Y values         
// Output: Values calculated by the distance formula provided 
//********************************************************
double calculateDistancehelper() 
{
//Set up the X values for the user to input
double x1, x2;

    printf("Enter your X values \n");
    printf("x1: ");
    scanf("%lf", &x1);
    printf("x2: ");
    scanf("%lf", &x2);
    
double y1, y2;
//Set up the Y values for the user to input 
    printf("Enter your Y Values \n");
    printf("y1: ");
    scanf("%lf", &y1);
    printf("y2: ");
    scanf("%lf", &y2);
//Add the distance formula for a circle onto here 
double distance = sqrt(pow(x2-x1,1)+pow(y2-y1,1)); 

return distance;
}
//********************************************************
// double calculateDistance ()
//
// Purpose: Recalls the helper function to calculate distance    
// Input: X and Y values         
// Output: Values calculated by the distance formula provided 
//********************************************************
double calculateDistance() 
{
//Recall the helper function
double distance = calculateDistancehelper();
//Print the message where the distance/result value would show 
    printf("The distance between the two points is %.3lf\n", distance );
    
    return distance;
}
//********************************************************
// double calculatePerimeter ()
//
// Purpose: Helps calculate the perimeter, or in other words, the diameter to find the circle 
// Input: X and Y Values 
// Output: Result of the calculated perimeter        
//********************************************************
double calculatePerimeter() 
{
// Recall the distance to add the input for the values without repeating it multiple times   
double distance = calculateDistancehelper();
// Add the equation here to do the calculation
double perimeter = PI*distance;
//Print statement to introduce the value calculated 
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    
    return 4.0;
}
//********************************************************
// double calculateArea ()
//
// Purpose:   Sets up the calculation for the values input
// Input:     X and Y values 
// Output:    Print Statement with the value for the area at the end of it calculated
// Postcondition:   None.
//********************************************************
double calculateArea() 
{
//Recall the distance formula for the input values once again
double distance = calculateDistancehelper();
//Set up the equation to calculate the value 
double area = PI*pow(distance/2,2);
//Print the statement that states the calculated area
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    
    return 2.0;
}
//********************************************************
// double calculateWidth ()
//
// Purpose: Helps print out the users needed measurement of the width of the circle
// Input: X and Y Values of the two points       
// Output: Calculated Width value with the print statement, which is the same as the distance
//********************************************************
double calculateWidth()
{
// Recall the distance value for the equation to calculate the x and y values the same way     
double width = calculateDistancehelper();
//Print the statement for the calculated to return it
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    
    return 3.0;
}
//********************************************************
// double calculateHeight ()
//
// Purpose: Helps print out the user needed measurement of the height of the circle 
// Input: X and Y values of the two points         
// Output: Calculated Height value along the printed statement
//********************************************************
double calculateHeight()
{
double height = calculateDistancehelper();

    printf("The height of the city encompassed by your request is %.3lf\n", height);
    
    return 3.0;
}
