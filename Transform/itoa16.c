#include<stdio.h>
#include<stdbool.h>

char *itoa(int n)
{
	int length=0;
	bool negative = false;
	char *ret = NULL;

	/*if(n<0)
	{
		n = -n;
		length++;
		negative = true;
	}*/

	int temp = n;
	while(temp)
	{
		temp/=16;
		length++;
		printf("temp=%d\n",temp);
	}

	ret = malloc(sizeof(char)*(length+1));
	ret[length]='\0';

	/*if(negative)
		ret[0]='-';*/

	int i = length-1;
	while(n)
	{
		printf("i=%d\n" ,i);
		ret[i] = n%16+'0';
		if(ret[i]>57&&ret[i]<64)	
			ret[i]=ret[i]+7;
		n/=16;
		i--;
	}
	printf("ret[2]=%d\n" ,ret[2]);	
	printf("ret[1]=%d\n" ,ret[1]);
	printf("ret[0]=%d\n" ,ret[0]);

	char str[]="0", *ret1=NULL;
	if(length==0)
		ret1="00";
	else if(length==1)
		ret1=strcat(str,ret);	
	else
		ret1=ret;

	return ret1;
}

int main(void)
{
	int a=0;
	printf("enter number= ");
	scanf("%d",&a);
	char *string = itoa(a);
	printf("string is %s\n", string);
	


	return 0;
}
