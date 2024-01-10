#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * keygen.c - a program that generates random valid passwords
 * for the program 101-crackme
 * check_sum - executes check_sum
 * @password: input char
 * Return: check_sum
 */
unsigned long check_sum(char *password)
{
unsigned long sum = 0;
while (*password != 0)
{
	sum += *password;
	password++;
}
return (sum);
}
/**
 * main - prints password for crakme
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char password[33];
	unsigned long sum;
	int i, flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			password[i] = alphabet[rand() % (sizeof(alphabet) - 1)];
		}
		password[i] = '\0';
		sum = check_sum(password);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", password);
		}
	}
return (0);
}
