/**
    File: lab-mar-29
    Demonstrates file I/O using the cslib library functions ReadLine
**/

#include <stdio.h>
#include "simpio.h"
#include "strlib.h"

int main()
{

    int i;
    FILE *infile;
	string temp;

    infile = fopen("recursion.txt", "r");

    if (infile == NULL)
        printf("file RECURSION.TXT not found or no permissions \n");
    else
    {
        printf("I am reading: \n" );

        while (TRUE)
        {
            temp = ReadLine(infile);

            if (temp==NULL)
                break;
            else
            {
				for (int i = 0; i < StringLength(temp); ++i)
				{
					if (IthChar(temp, i) == 'e')
						temp[i] = 'E';

				}
                printf("%s\n", temp);
            }

        }
		fclose(infile);
    }
    return 0;
}
