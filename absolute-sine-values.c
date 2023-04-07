/* This C program calculates the absolute value of sine function for values ranging from 0 to 3 with a step size of 0.1, 
  and prints the results to the console. */

#include<stdio.h>
#include<math.h> // including math.h for sin() and fabs() functions

int main(void)
{ 
    double interval; // declaring a variable to hold the current value of i divided by 10
    double absoluteSine; // declaring a variable to hold the absolute value of sin(interval)
    int i; // declaring a loop counter for the for loop

    // starting a for loop that runs 30 times, starting from 0 and incrementing i by 1 at each iteration
    for(i = 0; i <30; i++)
    {
        interval = i/10.0; // calculating the current value of interval as i divided by 10.0
        absoluteSine = fabs(sin(interval)); // calculating the absolute value of sin(interval) using the fabs() function
        printf("sin( %f ) = %f \t", interval, absoluteSine); // printing the value of sin(interval) to the console using printf()
    }

    printf("\n+++++++\n"); // printing a line of + characters to the console
    return 0; // returning 0 to indicate successful program execution
}
