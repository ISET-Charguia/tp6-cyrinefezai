/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int estseparateur(char c);
int nbrmot(char *text);
int main()
{
	char s [256];
	printf("entrer votre text:");
	fgets(s,sizeof(s),stdin);
	printf("votre text est contient %d mots.\n",nbrmot(s));
	return 0;
}
int estseparateur(char c)
{
	char *sep=", ; : ! ?.";
	if (strchr(sep,c) != NULL)
	{
		return 1 ;
	}
	return 0;
	}
int nbrmot(char *text)
{
	int nb=0;int i=0;
	if (text!=NULL &&strlen (text)>0)
	{
		while (estseparateur (text[i]))
i++;
	}
	for(;i<strlen(text)-1;i++)
	{
		if(estseparateur(text[i])&& ! estseparateur(text[i-1]))
		{
			nb++ ;
		}
	}
	if (!estseparateur(text[strlen(text -2)]))
	{
		nb++;
	}
	return nb;
}
return 0;
}
}
void majuscule( char *ch)
{int i=1;
ch[0]=ch[0]-32;
while(ch[i]!='\0')
{
	if(ch[i]==' '  || ch[i]=='?' || ch[i]=='!'|| ch[i]=='.'|| ch[i]==';' || ch[i]==':'&&ch[i]>'a' && ch[i]<'z')
{
	i++ ;
	ch[i]=ch[i]-32;
}
i++;
}
}
int main ()
const int max=100;
char ch[max];

}
	}
}
