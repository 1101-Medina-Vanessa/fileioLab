//Name: Vanessa Medina
//Date: 4/3/23
//Purpose: to create a program that reads a file and display all the odd numbers from that file

#include <stdio.h>
#define FILE_IO "fileio.txt"

void readFile(FILE* in_ptr, int* num1ptr, int* num2ptr, int* num3ptr, int* num4ptr, int* num5ptr, int* num6ptr);
int getOddNums(int wholeNum);


int main()
{
	int num1, num2, num3, num4, num5, num6;
	
	FILE* inFilePtr;

	inFilePtr = fopen(FILE_IO, "r");
	if(inFilePtr == NULL)
	{
		printf("file does not exist, sorry.\n");
		return 0;
	}
	

	readFile(inFilePtr, &num1, &num2, &num3, &num4, &num5, &num6);
	fclose(inFilePtr);
	
	getOddNums(num1);
	getOddNums(num2);
	getOddNums(num3);
	getOddNums(num4);
	getOddNums(num5);
	getOddNums(num6);


}

void readFile(FILE* in_ptr, int* num1ptr, int* num2ptr, int* num3ptr, int* num4ptr, int* num5ptr, int* num6ptr)
{
	fscanf(in_ptr, "%d", num1ptr);
	fscanf(in_ptr, "%d", num2ptr);
	fscanf(in_ptr, "%d", num3ptr);
	fscanf(in_ptr, "%d", num4ptr);
	fscanf(in_ptr, "%d", num5ptr);
	fscanf(in_ptr, "%d", num6ptr);
}

int getOddNums(int wholeNum)
{
	if(wholeNum % 2 != 0)
	{
		printf("%d\n", wholeNum);
	}

}
