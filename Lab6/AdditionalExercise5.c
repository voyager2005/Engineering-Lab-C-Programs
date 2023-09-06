/*
WAP to generate the calendar of a month given the start day of the week and the number of days in that month
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

void main()
{
    // declaration and initializaion 
    char days_of_the_week[7][9] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char start_day[9] = ""; 
    int number_of_days; 

    // reading the day from the user
    printf("Please enter the start day: [1st letter capital, following letters small, no spaces before or after text]: "); 
    scanf("%s", start_day); 

    // reading number of days in that month from the user
    printf("Please enter the numebr of days in that month: ");
    scanf("%d", &number_of_days);

    int reference = 0; 
    // if(start_day == "Sunday") reference = 0;
    // else if(start_day == "Monday") reference = 1;
    // else if(start_day == "Tuesday") reference = 2; 
    // else if(start_day == "Wednesday") reference = 3; 
    // else if(start_day == "Thursday") reference = 4; 
    // else if(start_day == "Friday") reference = 5; 
    // else if(start_day == "Saturday") reference = 6; 
    if(strcmp(start_day, days_of_the_week[0]) == 0) reference = 0; 
    else if(strcmp(start_day, days_of_the_week[1]) == 0) reference = 1;
    else if(strcmp(start_day, days_of_the_week[2]) == 0) reference = 2; 
    else if(strcmp(start_day, days_of_the_week[3]) == 0) reference = 3; 
    else if(strcmp(start_day, days_of_the_week[4]) == 0) reference = 4; 
    else if(strcmp(start_day, days_of_the_week[5]) == 0) reference = 5; 
    else if(strcmp(start_day, days_of_the_week[6]) == 0) reference = 6;

    // printing the framework of the calendar 
    printf("%s %s %s %s %s %s %s %s", "\n\n", "Sunday", "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday\n");

    for(int i = 0; i <= number_of_days + reference; i++)
    {
        if (i < reference || i - reference == 0)
        {
            printf("   -   ");
            continue;
        }

        printf("   %d   ", i-reference);

        if(i%7==0) printf("\n"); 
    }

}