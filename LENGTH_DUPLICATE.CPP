#include<stdio.h>
#include<conio.h>
#include<string.h>
void del(char str[], char ch);
int main() {
clrscr();
char str[10];
char ch;
printf("\nEnter the string: ");
gets(str);
printf("\nEnter character which you want to delete: ");
scanf("%ch", &ch);
del(str, ch);
getch();
}
void del(char str[], char ch) {
int i, j = 0;
int size;
char ch1;
char str1[10];
size = strlen(str);

for (i = 0; i < size; i++){
if (str[i] != ch) {
    ch1 = str[i];
str1[j] = ch1;
j++;
    }
	}
str1[j] = '\0';
printf("\nCorrected string is: %s", str1);
int c= strlen(str1);
printf("\n length is:%d",c);
}