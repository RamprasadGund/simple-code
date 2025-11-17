  #include <stdio.h>
int main() {
  float math, physics, chemistry, english, cs;
  float average;
   printf("Enter marks for 5 subjects:\n");
  printf("Math: ");
 scanf("%f", &math);
 printf("Physics: ");
 scanf("%f", &physics);
 printf("Chemistry: ");
   scanf("%f", &chemistry);
    printf("English: ");
    scanf("%f", &english);
    printf("Computer Science: ");
    scanf("%f", &cs);
 
    average = (math + physics + chemistry + english + cs) / 5.0;
        printf("\nAverage Marks = %.2f\n", average);
       if (average >= 90)
        printf("Grade = A (Excellent)\n");
    else if (average >= 75)
        printf("Grade = B (Very Good)\n");
    else if (average >= 60)
        printf("Grade = C (Good)\n");
    else if (average >= 50)
        printf("Grade = D (Pass)\n");
    else
        printf("Grade = F (Fail)\n");

    return 0;
}
