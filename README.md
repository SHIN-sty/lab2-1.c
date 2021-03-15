# lab2-1.c
optional
#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
//변수를 선언
printf("Size of char: %ld byte\n",sizeof(charType)); 
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));
//타입의 변수명
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); 
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));
//변수의 타입
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); 
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
//포인터 타입
printf("신태양\n");
printf("2017038096");
return 0;
}
