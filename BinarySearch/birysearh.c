#include<stdio.h>

int binarysearch(int *data, int search, int length)
{
	int low=0;
	int high=length-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(data[mid]==search)
		{
			return mid;
		}
		else if(data[mid]>search)
		{
			high=mid-1;
		}
		else if(data[mid]<search)
		{
			low=mid+1;
		}
	}
	return -1;
}

int binySerhDivide(int *data, int search, int length)
{
	int low=0;
	int high=length-1;
	int mid = (low+high)/2;
	if(data[mid]==search)
	{
		return mid;
	}
	else if(data[mid]>search)
	{
		binySerhDivide(data, search, length-1);
	}
	else if(data[mid]<search)
	{
		binySerhDivide(data, search, length+1);
	}
	else
		return -1;
}

int main(void)
{
	int search, ans, num;
	int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};

	printf("請輸入欲搜尋的資料:\n ");
	printf(" data{3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93}\n");
	scanf("%d", &search);

	
	printf("請輸入0:binarysearch; 1:Divide&Conquer\n ");
	scanf("%d", &num);

	switch(num)
	{	
		case 0:
			ans = binarysearch(data, search, sizeof(data) / sizeof(int));
			break;
		case 1:
			ans = binySerhDivide(data, search, sizeof(data)/sizeof(int)); 
			break;
	}

	if (ans < 0)
	{
		printf("找不到 %d\n", search);
	}
	else
	{
		printf("%d\n",ans);
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}

	return 0;
}
