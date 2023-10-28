#include <stdio.h>
                
#include "main.h"
                
                
/**
                
 * main - prints name of the program
                
 * @argc: num of arguments
                
 * @argv: array of arguments
                
 *
                
 * Return: Always 0 (Success)
                
 */
                
int main(int argc attribute((unused)), char *argv[])
                
{
                
        printf("%s\n", *argv);
                
                
        return (0);
                
}
