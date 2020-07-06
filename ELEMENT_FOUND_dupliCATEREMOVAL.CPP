
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int removeDuplicates(int arr[], int n)
{

    if (n==0 || n==1)
	return n;

    int temp[200];


    int j = 0;
    for (int i=0; i<n-1; i++)

	if (arr[i] != arr[i+1])
	    temp[j++] = arr[i];
    temp[j++] = arr[n-1];


    for (int x=0; i<j; x++)
       {	arr[x] = temp[x];}

    return j;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(arr, n);

    // Print updated array
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
  
    return 0; 
}