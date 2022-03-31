#include<stdio.h>
#include<conio.h>
void strcat(char[],char[]);
void main()
{
	char s[20],s1[20];
	clrscr();
	printf("\n Enter two string:");
	gets(s);
	gets(s1);
	strcat(s,s1);
}
void strcat(char s1[20],char s2[20])
{
	char s3[20];
	int i,j;
	{
	for(i=0;s1[i]!='\0';i++)
		s3[i]=s1[i];
	for(j=0;s2[j]!='0';i++,j++)
		s3[i]=s2[j];
		s3[i]='\0';
	}
	printf("\n The cocanate string:%s",s3);
       // printf("\n\t%s",s3);
		s3[i]='\0';
		getch();
}