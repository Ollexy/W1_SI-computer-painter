#include <stdio.h>
#include <conio.h>

void menu();
void triangleX(int rows, int i, int j);
void rectangleX(int rows, int i, int j);
void rectangleXo(int rows, int i, int j, int columns, int k);
void frameX(int rows, int columns, int i, int j);
void diagonalsX(int rows, int i, int j, int columns);
void chess(int rows, int i, int j, int columns, int k);
void diagonalsFrame(int rows, int columns, int i, int j);
void diamond(int rows, int columns, int i, int j);

int main()
{
	char choice;
	int i, j, k, rows, columns;		//declaring variables

		menu();

		choice = getchar();
		
		switch(choice)
		{
			case '1':
				triangleX(&rows, &i, &j);
			break;
			case '2':
				rectangleX(&rows, &i, &j);
			break;
			case '3':
				rectangleXo(&rows, &i, &j, &columns, &k);
			break;
			case '4':
				frameX(&rows, &columns, &i, &j);
			break;
			case '5':
				diagonalsX(&rows, &i, &j, &columns);
			break;
			case '6':
				chess(&rows, &i, &j, &columns, &k);
			break;
			case '7':
			{
				diagonalsFrame(&rows, &columns, &i, &j);
			}
			break;
			case '8':
				diamond(&rows, &columns, &i, &j);
			break;

			default: printf("There is no such option. Try again.");
		}
	return 0;
}

void menu()
{
	printf("Choose option below\n");
	printf("-------------------\n\n");
	printf("(1) Triangle of X\n");
	printf("(2) Rectangle of X\n");
	printf("(3) Rectanfle of XO\n");
	printf("(4) Frame of X\n");
	printf("(5) X on both diagonals\n");
	printf("(6) Chess pattern\n");
	printf("(7) Frame pattern with diagonals\n");
	printf("(8) Diamond pattern\n\n");
}
void triangleX(int rows, int i, int j)
{
	//printing triangle of X
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);								//number of rows

	for (i = 1; i <= rows; i++)								// printing i rows
	{
		for (j = 1; j <= i; j++)							// printing j of "X"
		{
			printf("X");
		}
		printf("\n");
	}
}
void rectangleX(int rows, int i, int j)
{
	//print rectangle of X
	printf("How many rows: ");
	scanf_s("%d", &rows);									//number of rows

	for (i = 1; i <= rows; i++)								// printing i rows
	{
		for (j = 1; j <= rows; j++)							// printing j of "X"
		{
			printf("X");
		}
		printf("\n");
	}
}
void rectangleXo(int rows, int i, int j, int columns, int k)
{
	//print rectangle of alternate changing Xo
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);								//number of rows
	printf("Enter number of columns: ");
	scanf_s("%d", &columns);							//number of columns

	k = 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			if (k == 1)
			{
				printf("X");
			}
			else
			{
				printf("o");
			}

			// If k = 1  then k *= -1 => -1
			// If k = -1 then k *= -1 =>  1
			k *= -1;
		}

		if (columns % 2 == 0)
		{
			k *= -1;
		}

		printf("\n");
	}
}
void frameX(int rows, int columns, int i, int j)
{
	//print frame of X
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);
	printf("Enter number of columns: ");
	scanf_s("%d", &columns);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{

			//Print X if its first or last row
			//Print X if its first or last column
			if (i == 1 || i == rows || j == 1 || j == columns)
			{
				printf("X");
			}
			else
			{
				printf("o");
			}
		}

		printf("\n");
	}
}
void diagonalsX(int rows, int i, int j, int columns)
{
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);
	printf("Enter number of columns: ");
	scanf_s("%d", &columns);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			if (i == j || (j == (columns + 1) - i))
			{
				printf("X");
			}
			else
			{
				printf("o");
			}
		}

		printf("\n");
	}

}
void chess(int rows, int i, int j, int columns, int k)
{
	//print rectangle of alternate changing Xo
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);								//number of rows
	printf("Enter number of columns: ");
	scanf_s("%d", &columns);							//number of columns

	k = 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			if (k == 1)
			{
				printf("XXX");
			}
			else
			{
				printf("ooo");
			}

			// If k = 1  then k *= -1 => -1
			// If k = -1 then k *= -1 =>  1
			k *= -1;
		}

		if (columns % 2 == 0)
		{
			k *= -1;
		}

		printf("\n");
	}
}
void diagonalsFrame(int rows, int columns, int i, int j)
{
	printf("Enter number of rows:  ");
	scanf_s("%d", &rows);
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= rows; j++)
		{
			if (i == 1 || i == rows || j == 1 || j == rows - i + 1 || i == j || j == rows)
			{
				printf("X");
			}
			else
			{

				printf("o");
			}

		}
		printf("\n");
	}
}
void diamond(int rows, int columns, int i, int j)
{
	printf("Enter the number of rows: ");
	scanf_s("%d", &rows);

	//upper half part of diamond
	for (i = 1; i <= rows; i++) {
		for (j = i; j <= rows; j++) {
			printf("o");
		}
		for (j = 1; j <= (2 * i - 2); j++) {
			printf("X");
		}
		for (j = i; j <= rows; j++) {
			printf("o");
		}
		printf("\n");
	}
	//lower half part of diamond
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("o");
		}
		for (j = (2 * i - 2); j < (2 * rows - 2); j++)
		{
			printf("X");
		}
		for (j = 1; j <= i; j++)
		{
			printf("o");
		}
		printf("\n");
	}
}
