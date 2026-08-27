/*
Program(1)-> Write a program to make use of basic I/O functions using different datatypes
Solution(1)-> Predefined Values
*/
#include<stdio.h>
int main()
{
 int rollnum;
 float per;
 char grade;

 rollnum=101;
 per=89.75;
 grade='A';

 printf("-----Student Information-----\n");
 printf("\n Roll Number:%d",rollnum);
 printf("\n Percentage:%.f",per);
 printf("\n Grade:%c",grade);
 
 return 0;
 }