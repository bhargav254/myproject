#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char *keyword,*plain,*kwtext,*cipher,*dplain;
	int i;
	clrscr();
	printf("Enter keyword : ");
	gets(keyword);
	printf("Enter plain text : ");
	gets(plain);
	printf("Keyword : %s",keyword);
	printf("\nKeyword length = %d",strlen(keyword));
	printf("\nPlain text : %s",plain);
	printf("\nPlain text length = %d",strlen(plain));
	strcpy(kwtext,keyword);
	strncat(kwtext,plain,strlen(plain)-strlen(keyword));
	printf("\nKeyword text : %s",kwtext);
	printf("\nKeyword text length = %d",strlen(kwtext));
	for(i=0;i<strlen(plain);i++)
	{
		*(cipher+i)=*(kwtext+i)^*(plain+i);
	}
	printf("\nCipher text : %s",cipher);
	printf("\nCipher text length = %d",strlen(cipher));
	for(i=0;i<strlen(plain);i++)
	{
		*(dplain+i)=*(kwtext+i)^*(cipher+i);
	}
	*(dplain+i)='\0';
	printf("\nDecrypted plain text : %s",dplain);
	printf("\nDecrypted plain text length : %d",strlen(dplain));
	getch();
}