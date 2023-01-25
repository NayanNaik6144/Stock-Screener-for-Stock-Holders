#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
#include"struct.h"

void selectChoice(FILE** fptr)  //
{

	//Unconditional Loops: Loop that repeat set of commands with no condition, so loop execution is compulsory.
	/*
	while(1)
	It is an infinite loop which will run till a break statement is issued explicitly. 
	Interestingly not while(1) but any integer which is non-zero will give a similar effect as while(1). T
	herefore, while(1), while(2) or while(-255), all will give infinite loop only.

	while(0)
	It is opposite of while(1). It means condition will always be false and thus code in while will never get executed. 
	*/


	while(1)  // while is unconditional loop bcz its doesnot contain any conditions inside 
	{

		//system.cls()

		system("cls");  // linux asel tar clear ani window asel tar cls

		/*
		fflush() is typically used for output stream only. Its purpose is to clear (or flush) the output buffer
		 and move the buffered data to console (in case of stdout) or disk (in case of file output stream).
		*/

		fflush(stdin); //
		int choice;

		printf("\nList of stocks\n\n1.ADANIENT\n2.ASIANPAINT\n3.CAP\n4.PNB\n5.TATAMOTORS\n6.ZOMATO\n7.Exist\n\n");
		printf("select your choice \n");
		scanf("%d", &choice);


       // fopen( file name and mode of opearation) required two parameter for fopen()
		switch(choice)   
		{

			case 1:
				printf("\nADANIENT\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\ADANIENT.NS.csv", "r");
			        return;

			case 2:
				printf("\nASIANPAINT\n\n");
				*fptr = fopen("ASIANPAINT.csv", "r");
				return;

			case 3:
				printf("\nCAP\n\n");
				*fptr = fopen("CAP.csv", "r");
				return;

			case 4:
				printf("\nPNB\n\n");
				*fptr = fopen("PNB.csv", "r");
				return;

			case 5:
				printf("\nTATAMOTORS\n\n");
				*fptr = fopen("TATAMOTORS.csv", "r");
				return;

			case 6:
				printf("\nZOMATO\n\n");
				*fptr = fopen("ZOMATO.csv", "r");
				return;

			case 7:
				exit(0);
				
			default:
				printf("Invalid Selection");
				break;
		}
	}
}
