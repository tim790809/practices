#include <stdio.h>
#include <stdlib.h>


void ReverseArray2(int *pintArray, int intArraySize)
{
    int i, j;
    int temp;
    for(i=0, j=intArraySize-1; i<j; i++, j--)
    {
        temp = *(pintArray+i);
        *(pintArray+i) = *(pintArray+j);
        *(pintArray+j) = temp;
    }
}

/*void ReverseArray(int *pintArray, int intArraySize)
{
    int intBuf;
    int i;
    for(i=(intArraySize-1);i>(intArraySize-1)/2;i--)
    {
        if(i!=(intArraySize-1-i))
        {
            intBuf=*(pintArray+i);
            *(pintArray+i)=*(pintArray+(intArraySize-1-i));
            *(pintArray+(intArraySize-1-i))=intBuf;
        }
        else
        {
            break;
        }
    }
        
}*/

void SwapArray(int *nx, int *ny, int intArraySize)
{
    int i, intBuf;
    for(i=0;i<intArraySize;i++)
    {
        intBuf=*(nx+i);
        *(nx+i)=*(ny+i);
        *(ny+i)=intBuf;
    }
}

void BubbleSort(int *pintArray,int intArraySize)//sw=1:small->big
{
    int i,j;
    int intBuf;
 	for(i=0;i<intArraySize;i++)//做幾次
	{
		for(j=0;j<(intArraySize-i-1);j++)
		{
			if((*(pintArray+j)>*(pintArray+j+1)))
			{//small->big
				intBuf=*(pintArray+j);
				*(pintArray+j)=*(pintArray+j+1);
				*(pintArray+j+1)=intBuf;
			}

		}
	}
}

int main()
{
    int nx[5]={1,3,2,4,1};
    int ny[5]={10,8,7,9,10};
    int i;
    printf("原始資料\n");
    
    for(i=0;i<(sizeof(nx)/sizeof(int));i++)
    {
        printf("%d\n",nx[i]);
    }

    for(i=0;i<(sizeof(ny)/sizeof(int));i++)
    {
        printf("%d\n",ny[i]);
    }

    printf("\n------------------\n");
    
    printf("將兩陣列反轉\n");
    
    ReverseArray2(nx,(sizeof(nx)/sizeof(int)));
    ReverseArray2(ny,(sizeof(ny)/sizeof(int)));
    
    for(i=0;i<(sizeof(nx)/sizeof(int));i++)
    {
        printf("%d\n",nx[i]);
    }

    for(i=0;i<(sizeof(ny)/sizeof(int));i++)
    {
        printf("%d\n",ny[i]);
    }
    
    printf("\n------------------\n");
    
    printf("將兩陣列交換\n");
    
    SwapArray(nx,ny,sizeof(nx)/sizeof(int));
    
    for(i=0;i<(sizeof(nx)/sizeof(int));i++)
    {
        printf("%d\n",nx[i]);
    }

    for(i=0;i<(sizeof(ny)/sizeof(int));i++)
    {
        printf("%d\n",ny[i]);
    }

    printf("\n------------------\n");
    
    printf("將兩陣small->big\n");
    
    BubbleSort(ny,sizeof(ny)/sizeof(int));//small->big
    BubbleSort(nx,sizeof(nx)/sizeof(int));//small->big
    
    for(i=0;i<(sizeof(nx)/sizeof(int));i++)
    {
        printf("%d\n",nx[i]);
    }

    for(i=0;i<(sizeof(ny)/sizeof(int));i++)
    {
        printf("%d\n",ny[i]);
    }
    
    return 0;
}

