#include<stdio.h>

int main() {

/*int age = 15; // if condition

if (age>18){
    printf("WELCOME\n");
    printf("Your age is greater than 10\n");
}
 else{

    printf("Your age is not greater than 10\n"); // else statement
  // if(0) will not be execute.

 } */

/*int a = 1; int b = 0;
printf("The value of a and b is %d\n" , a&&b);
printf("The value of a or b is %d\n" , a||b);
printf("The value (not) a is %d\n" , !a);

if (a && b) {
    printf("both are true\n");
}
else {
    printf("not true");
} */
/*int age = 48;
if(age>60){

printf("You can drive and you are a senior citizen");
}
else if (age>45){
        printf(" You can drive and you are an adult");
}
else if (age>18){
    printf("you can drive");
}
else{
    printf("You can not drive");
}*/

// short method to use if else.
//int a = 34;
//int b = 45;
//a>b?printf("a is greater"):printf("b is greater");

//int a;
//printf("Enter a: ");
//scanf("%d" , &a);

/*switch(a){
case 1:
    printf("You entered 1\n");
    break ;
case 2:
    printf("You entered 2\n");
    break ;
case 3:
    printf("You entered 3\n");
    break ;
case 4:
    printf("You entered 4\n");
    break ; */

// Pracise set.

/*int marks1, marks2, marks3;
printf("Enter marks1: \n");
scanf("%d" , &marks1);
printf("Enter marks2: \n");
scanf("%d" , &marks2);
printf("Enter marks3: \n");
scanf("%d" , &marks3 );

if (marks1<33 || marks2<33 || marks3<33){
    printf("You are failed in due to low marks in individual subject(s)");
}
else if((marks1 + marks2 + marks3)/3 <40){
    printf("You are failed due to low marks percentage");

}
else {
    printf("congratulations you are passed!");
} */

/*int income;
float tax = 0;

printf("enter amount of income: \n");
scanf("%d" , &income);
if (income<250000){
    tax = 0;
}
else if (income>250000 && income<=500000){
    tax = 0.05*(income - 250000);
}
else if (income>500000 && income<=1000000){
    tax = 0.05 * (500000 - 250000)+ 0.2 * (income - 500000);
}
else {
   tax = 0.05 * (500000 - 250000)+ 0.2 * (1000000 - 500000)+ 0.3 * (income - 100000);

}

printf(" Total tax need to pay is %d" , tax);*/

/*int year;
printf("Enter a year \n");
scanf("%d" , &year);

if((year %4==0 && year%100!= 0) || year %400==0){
printf("The year is leap year: \n");

}
else{
    printf("The year is not leap year:");
} */

// greatest of all 4 numbers


return 0;


}
