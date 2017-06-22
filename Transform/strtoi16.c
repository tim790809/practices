#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int onestrTobyte(char *str, int i)
{
	int numarray=0;
	int temp, shift=1;
	for(int j=1;j>=0;j--)
	{
		
		temp=str[i*2+j];
		//printf("%d\n",temp);
		if (temp >= 48 && temp <= 57)
			temp = temp - 48;
		else if (temp >= 65 && temp <= 70)
			temp = temp - 55;
		else if (temp >= 97 && temp <= 102)
			temp = temp - 87;
		else
		{
			numarray = 0;
			return -1;
		}

		numarray += temp * shift;
		shift = shift * 16;
	}
	printf("%x\n",numarray);	
	return numarray;
}

int aatoi(char *str)
{
	int a=strlen(str);
	int numcont;
	char str0[]="0";
	if(1==a%2)
	{
		numcont=a/2+1;	
		str=strcat(str0,str);
	}
	else
	{
		numcont=a/2;
	}

	printf("str=%s\n",str);
	printf("str[0]=%c\n",str[0]);
	printf("str[1]=%c\n",str[1]);

	int *num=NULL;
	int numarr[numcont];
	for(int i=0;i<numcont;i++)
	{
		numarr[i]=onestrTobyte(str,i);
	
		printf("str=%x\n",numarr[i]);
	}
	/*while(*str!='\0')
	{
		str++;
		i++;
	}*/


      
	return a;
}


int main(void)
{
	printf("enter str\n");
	int num=aatoi("142635abfea");

	return 0;
}
