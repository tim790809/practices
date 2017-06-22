#include<stdio.h>
#include<stdlib.h>

char *reverse_string(char *str)
{
	char temp;
	int len=strlen(str)-1;
	int k=len;
	for(int i=0 ; i<len ; i++)
	{
		temp=str[k];
		str[k]=str[i];
		str[i]=temp;
		k--;
		
		if(k==(len/2))
			return str;
	}
}


char *reverse2(char* str)
{
	int length =strlen(str);
	if(str==NULL)
		return -1;
	
	char *new=str;
	char *end=str+length-1;
	while(str<end)
	{
		*str=*str^*end;
		*end=*str^*end;
		*str=*str^*end;
		str++;
		end--;
	}	
	return str;
}

int main()
{
	char str[]="This is a Test";
	printf("%s\n",str);
	//reverse_string(str);
	//printf("%s\n",str);
	reverse2(str);
	printf("%s\n",str);
	
	return 0;
}
