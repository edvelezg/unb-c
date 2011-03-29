/**
	File: lab-mar-29
	Demonstrates file I/O using the cslib library functions ReadLine
**/

#include <stdio.h>
#include "simpio.h"
#include "strlib.h"


int main(){

  int i;
   FILE *infile, *outfile;
	string filename, temp, output;

	output = "textChanged.txt";
	printf("This program reads and writes data\n");
	filename = GetLine();

	infile = fopen(filename, "r");

	if(infile == NULL)
		printf("file %s not found or no permissions \n",filename);
	else{
		printf("I read : \n" );
		outfile = fopen(output,"w");
		if(outfile == NULL)
			printf("File: %s not found or no permissions", output);


		else {
		while(TRUE){
			temp = ReadLine(infile);
			if(temp==NULL)
		   		break;
	  		else {
				for(int i = 0; i < StringLength(temp); ++i){
					if(IthChar(temp, i) == 'e')
						fprintf(outfile,"%c", 'E');
					else
						fprintf(outfile,"%c",IthChar(temp, i));
				}
				fprintf(outfile, "\n");
      }
	}


	fclose(infile);
	fclose(outfile);
	}
}


}















