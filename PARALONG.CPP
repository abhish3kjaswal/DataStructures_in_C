
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
int maxbalancedprefix(char str[], int n)
{
    int sum = 0;
    int maxi = 0;

    // Traversing the string.
    for (int i = 0; i < n; i++) {

	// If open bracket add 1 to sum.
	if (str[i] == '(')
	    sum += 1;

	// If closed bracket subtract 1
	// from sum
	else
	    sum -= 1;

	// If sum is 0, store the index
	// value.
	if (sum == 0)
	    maxi = i;
    }

    return maxi + 1;
}

// Driven Program
int main()
{
clrscr();
    char str[10];
    int l;
    printf("\n enter no of parentheses");
    scanf("%d",&l);
    printf("\nenter the parentheses:" );
    for(int i=0;i<l;i++){
    scanf("%d",&str[i]);
    }
    int n = strlen(str);

    cout << maxbalancedprefix(str, n) << endl;
    getch();
    return 0;
}