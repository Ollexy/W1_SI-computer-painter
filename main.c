#include <stdio.h>

void menu();

int main()
{
	char choice;
	int i, j, k, rows, columns;		//declaring variables

		menu();

		scanf_s("%c", &choice);
		
		switch(choice)
		{
			case '1':
			{
				//printing traingle of X
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
			break;
			case '2':
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
			break;
			case '3':
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
			break;
			case '4':
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
			break;
			case '5':
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
			break;
			case '6':
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
			break;
			case '7':
			{
				printf("Enter number of rows =  ");
				scanf_s("%d", &rows);

				for (i = 1; i <= rows; i++)
				{
					for (j = 1; j <= rows; j++)
					{
						if (i == 1 || i == rows || i == j || j == 1 || j == rows || j == rows - i + 1)
						{
							printf("X");
						}
						else
						{
							printf("o ");
						}
					}
					printf("\n");
				}
			}
			break;
			case '8':
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
			break;
		}
	return 0;
}

void menu()
{
	printf("Choose option below\n");
	printf("-------------------\n\n");
	printf("(1) Traingle of X\n");
	printf("(2) Rectangle of X\n");
	printf("(3) Rectanfle of XO\n");
	printf("(4) Frame of X\n");
	printf("(5) X on bothf diagonals\n");
	printf("(6) Chess pattern\n");
	printf("(7) Frame pattern with diagonals\n");
	printf("(8) Diamond pattern\n\n");
}
