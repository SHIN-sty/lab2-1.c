#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
//������ ����
printf("Size of char: %ld byte\n",sizeof(charType)); 
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));
//Ÿ���� ������
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); 
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));
//������ Ÿ��
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); 
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
//������ Ÿ��
printf("���¾�\n");
printf("2017038096");
return 0;
}
