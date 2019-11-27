#include<stdio.h>
#include<stdint.h>
void _swap_(int32_t *a, int32_t *b){
	int32_t temp = *a;
	*a = *b;
	*b = temp;
}
static uint32_t partition(int32_t a[],uint32_t start,uint32_t end)
{
	uint32_t up,down,temp;
	int32_t pivot = a[start];
	up=start;
	down=end;

	do{
		while(pivot>=a[up] && up<=down)
		{
			up++;
		}
		while(pivot<a[down] && up<=down)
		{
			down--;
		}
		if(up<=down)
		{
			_swap_(&a[up],&a[down]);
		}
	}while(up<=down);
	
	_swap_(&a[start],&a[down])	;
return down;
}


void quick(int32_t a[],uint32_t start, uint32_t end)
{
	uint32_t mid;
	if(start<end){
	mid = partition(a,start,end);
	quick(a,start,mid-1);
	quick(a,mid+1,end);
}
	
}


int main()
{
	int32_t a[10]={23,1,45,90,7,43},i;
	
	
	quick(a,0,5);
	for( i=0;i<6;i++)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
