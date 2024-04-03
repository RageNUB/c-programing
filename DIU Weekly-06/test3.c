/*
lorem30 jdgadb jhvgsjvb
*/
// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i = 15; i >= 5; i = i - 2)
//     {
//         printf("%d Rimon\n", i);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int i = 1; //initialization
//     while(i <= 10) //condition
//     {
//         printf("%d Rimon\n", i);
//         i++; //increment / decrement
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int i = 11;
//     do
//     {
//         printf("%d Rimon\n", i);
//         i++; //12
//     }
//     while(i <= 10);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int iNumber, iCount, iSum;
//     iSum = 0; //40
//     iCount = 0; //3

//     printf("To stop enter -1. Otherwise Enter positive numbers : " );
//     scanf("%d", &iNumber);
//     while (iNumber != -1)
//     {
//         iSum = iSum + iNumber; // find sum of numbers entered
//         iCount++;              // count how many numbers entered
//         printf("To stop enter -1. Otherwise Enter positive numbers : " );
//         scanf("%d", &iNumber);
//     }

//     printf("\nThe sum of %d numbers is %d", iCount, iSum);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     bool flag = true; // True/False
//     int iGuess;
//     while (flag)
//     {
//         printf("Enter number between 1 and 200: ");
//         scanf("%d", &iGuess);
//         if ((iGuess >= 50) && (iGuess <= 100)) // t + t = t, t + f = f
//         {
//             flag = false;
//             printf("\nBINGO!\n");
//         }
//     }

//     printf("\nEnd of the program");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int iLoop1, iLoop2;
//     for (iLoop1 = 1; iLoop1 <= 4; iLoop1++)
//     {
//         printf("%d. ", iLoop1);

//         for (iLoop2 = 10; iLoop2 <= 15; iLoop2++)
//         {
//             printf("%d ", iLoop2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float iMarks, iTotal = 0, iCount = 0, fAvg;
//     char cChoice;

//     do
//     {
//         for (iCount = 0; iCount < 3; iCount++)
//         {
//             printf("\nEnter test marks: ");
//             scanf("%d", &iMarks);
//             iTotal = iTotal + iMarks;
//         }
//         fAvg = iTotal / iCount;
//         printf("\nAverage: %.2f", fAvg);
//         printf("\nContinue? ");
//         scanf("%c", &cChoice);
//     } while (cChoice == 'y');

//     return 0;
// }

// Rahim, Karim, Farid, and Mitul are 4 friends. They want to meet after sol
// long. All of them have started their new job. They have the plan to arrange a
// picnic. The person who has the largest salary will pay for this picnic. Help
// them to identify who will be the arranger. As input, serially take the salaries
// of Rahim. Karim, Farid, and Mitul.
// #include <stdio.h>
// int main()
// {
//     int rahim, karim, farid, mitul;

//     printf("Enter Mitul salary: ");
//     scanf("%d", &mitul);
//     printf("Enter Rahim salary: ");
//     scanf("%d", &rahim);
//     printf("Enter Karim salary: ");
//     scanf("%d", &karim);
//     printf("Enter Farid salary: ");
//     scanf("%d", &farid);

//     if((mitul > rahim) && (mitul > karim) && (mitul > farid))
//     {
//         printf("The arrenger will be Mitul\n");
//     }
//     else if(rahim > mitul && rahim > karim && rahim > farid)
//     {
//         printf("The arrenger will be Rahim\n");
//     }
//     else if(karim > mitul && karim > rahim && karim > farid)
//     {
//         printf("The arrenger will be Karim\n");
//     }
//     else
//     {
//         printf("The arrenger will be Farid\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5];

//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// Construct a c program using a loop to find the sum of all even numbers within a
// given range.
// #include <stdio.h>
// int main()
// {
//     int start_point, end_point;
//     int sum = 0;
//     scanf("%d %d", &start_point, &end_point);

//     for(int i = start_point; i <= end_point; i++)
//     {
//         if(i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     }

//     printf("The sum of all even numbers in given range is: %d", sum);

//     return 0;
// }

// // Design a C program that accepts input for hours and minutes, and then computes and
// // prints the total number of minutes.
// #include <stdio.h>
// int main()
// {
//     int hours, minutes;
//     int total_minutes;
//     scanf("%d %d", &hours, &minutes);

//     total_minutes = (hours*60) + minutes;
//     printf("Total number of minutes is: %d", total_minutes);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     while (a * a * a < 150)
//     {
//         printf("%4d", a * a * a);
//         a++;
//     }
//     return 0;
// }

// // Apply loop to solve this problem. Write a code accordingly
// // to draw a pattern like this in C language:
// //     1
// //    121
// //   12321
// //  1234321
// // 123454321
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for(int j = i-1; j >= 1; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// /*Evaluate the following problem by writing a C program using a switch
// case. You have to print a message on the output console for a specific
// Grade.
// You will take the grade as input from user
// Il the grade is "A, you will print "Excellent"
// If the grade is 'B", you will print "Well Done"
// If the grade is "C, you will print "You Passed"
// You will print "Better Try Again" if the grade is D'..
// If the grade is none of the above you will print "Invalid Grade"*/
// #include <stdio.h>
// int main()
// {
//     char grade;
//     scanf("%c", &grade);
//     switch (grade)
//     {
//     case 'A':
//         printf("Excellent");
//         break;
//     case 'B':
//         printf("Well Done\n");
//         break;
//     case 'C':
//         printf("You Passed\n");
//         break;
//     case 'D':
//         printf("Better Try Again\n");
//         break;
//     default:
//         printf("Invalid Grade\n");
//         break;
//     }
//     return 0;
// }

/*Analyze the following problem and solve using C:
Mita and Rita are playing with some boxes, each box contains one integer number.
They take equal number of boxes randomly each time and sum the total value. Whose
sum value is positive, she wins. If both of them achieve positive sum values or
both of them achieve negative sum values or the sum value is 0, the play will be
announced a draw. Use array to solve this
Sample Input 1:                         Sample Outputs 1:
4                                       Rita will win!
Mita: -3 -4 5 -10
Rita: 4 5 -2 5
Sample Inputs 2:                        Sample Output 2:
3                                       DRAW
Mita: 4 24 15
Rita: 4 5 -2
*/
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr1[n], arr2[n];
//     int sum1 = 0, sum2 = 0;

//     printf("Mita: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//         sum1 = sum1 + arr1[i];
//     }
//     printf("Rita: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr2[i]);
//         sum2 = sum2 + arr2[i];
//     }

//     if (sum1 > 0 && sum2 <= 0)
//     {
//         printf("Mita will win!");
//     }
//     else if (sum1 <= 0 && sum2 > 0)
//     {
//         printf("Rita will win!");
//     }
//     else
//     {
//         printf("DRAW");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("%s\n", s);
    return 0;
}