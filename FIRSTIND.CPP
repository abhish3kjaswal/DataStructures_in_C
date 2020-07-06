#include <stdio.h>
#include <string.h>
#include<conio.h>
/* Function declaration */
int indexOf(const char * str, const char toFind);


int main()
{
	clrscr();
    char str[100];
    char toFind;
    int index;

    /* Input string from user and character to be searched */
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();

    index = indexOf(str, toFind);

    if(index == -1)
	printf("'%c' not found.", toFind);
    else
	printf("'%c' is found at index %d.", toFind, index);
	getch();
    return 0;
}
int indexOf(const char * str, const char toFind)
{
    int i = 0;

    while(str[i] != '\0')
    {
	if(str[i] == toFind)
	    return i;
	i++;
    }

    // Return -1 as character not found
    return -1;
}