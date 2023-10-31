#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num funtion description: check - string there are digit
* @str: array str
* Return: 0 if success else 1 if faild
**/
int check_num(char *str)

{
/*Declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}
/**
* main funtion description: main point - entry point
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
* Return: 0 if success else 1 if faild
**/
/**
* main - Entry point
* Description: 'alx task argc'
* Return: Always 0 (Success)
**/
int main(int argc, char *argv[])

{
 /**
* main - Entry point
* Description: 'alx task argc'
* Return: Always 0 (Success)
**/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}

