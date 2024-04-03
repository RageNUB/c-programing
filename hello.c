#include <stdio.h>
int main()
{
    char subjects[5][50] = {"Math", "English", "Art of Living","Computer Fundamental","Intruduction of Software Engineering" };

    float sumOfGrades = 0;
    for(int i = 0; i < 5; i++){
      float mark = 0;
      printf("Enter your %s marks: ", subjects[i]);
      scanf("%f", &mark);

      if(mark >= 80) {
        sumOfGrades += 4.00;
      } else if(mark >= 75) {
        sumOfGrades += 3.75;
      } else if(mark >= 70) {
        sumOfGrades += 3.50;
      } else if(mark >= 65) {
        sumOfGrades += 3.25;
      } else if(mark >= 60) {
        sumOfGrades += 3.00;
      } else if(mark >= 55) {
        sumOfGrades += 2.75;
      } else if(mark >= 50) {
        sumOfGrades += 2.50;
      } else if(mark >= 45) {
        sumOfGrades += 2.25;
      } else if(mark >= 40) {
        sumOfGrades += 2.00;
      } else {
        sumOfGrades += 0.00;
      }
    }

    float cgpa = sumOfGrades / 5;
    printf("Your CGPA is %.2f", cgpa);
    return 0;
}